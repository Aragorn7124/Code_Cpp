# 编译器和标志
CXX       = g++
CXXFLAGS  = -std=c++17 -Wall -Wextra -Iinclude
LDFLAGS   =
TARGET    = calc.exe

# 自动获取 src/ 下所有 .cpp 文件
SRCDIR    = src
SRCS      = $(wildcard $(SRCDIR)/*.cpp)

# 生成对应的 .o 文件列表（放到 obj 目录，保持目录结构）
OBJDIR    = obj
OBJS      = $(patsubst $(SRCDIR)/%.cpp,$(OBJDIR)/%.o,$(SRCS))

# 自动依赖文件（.d 文件，用于跟踪头文件变化）
DEPS      = $(OBJS:.o=.d)

# 默认目标
all: $(TARGET)

# 链接：将所有 .o 链接成可执行文件
$(TARGET): $(OBJS)
	$(CXX) $^ -o $@ $(LDFLAGS)

# 编译：将每个 .cpp 编译成 .o，同时生成依赖文件
# -MMD -MP 自动生成 .d 文件，记录头文件依赖
$(OBJDIR)/%.o: $(SRCDIR)/%.cpp | $(OBJDIR)
	$(CXX) $(CXXFLAGS) -MMD -MP -c $< -o $@

# 创建 obj 目录（如果不存在）
$(OBJDIR):
	mkdir -p $@

# 清理
clean:
	rm -rf $(OBJDIR) $(TARGET)

# 包含自动生成的依赖文件（仅当存在时）
-include $(DEPS)

.PHONY: all clean
