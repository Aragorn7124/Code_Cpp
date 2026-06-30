SRCDIR = src
SRCS = $(wildcard $(SRCDIR)/*.cpp)

sim:
	mkdir build
	g++ -g -Iinclude $(SRCS) -o build/cpu

run:
	./build/cpu

clean:
	rm -rf build

gdb:
	gdb ./build/cpu

