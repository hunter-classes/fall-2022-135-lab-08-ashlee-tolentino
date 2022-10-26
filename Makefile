

main: main.o imageio.o invert.o invert-half.o
	g++ -o main main.o imageio.o invert.o invert-half.o

main.o: main.cpp imageio.h invert.h invert-half.h

imageio.o: imageio.cpp imageio.h

invert.o: invert.cpp invert.h

invert-half.o: invert-half.cpp invert-half.h


clean:
	rm -f main.o imageio.o invert.o invert-half.o
