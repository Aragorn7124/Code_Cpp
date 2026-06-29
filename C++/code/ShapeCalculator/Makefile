SRCDIR = src
SRCS = $(wildcard $(SRCDIR)/*.cpp)

sim:
	mkdir build
	g++ -g -Iinclude $(SRCS) -o build/Calculator

run:
	./build/Calculator

gdb:
	gdb ./build/Calculator

clean:
	rm -rf build
