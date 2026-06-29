SRCDIR    = src
SRCS      = $(wildcard $(SRCDIR)/*.cpp)

sim:
	mkdir build
	g++ -Iinclude $(SRCS) -o build/Animal

run:
	./build/Animal

clean:
	rm -rf build


