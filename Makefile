

main: main.o imageio.o invert.o
	g++ -o main main.o imageio.o invert.o

main.o: main.cpp imageio.h

imageio.o: imageio.cpp imageio.h

invert.o: invert.cpp invert.h


clean:
	rm -f main.o imageio.o invert.o
