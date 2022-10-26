main: main.o imageio.o invert.o invert-half.o box.o
	g++ -o main main.o imageio.o invert.o invert-half.o box.o

main.o: main.cpp imageio.h invert.h invert-half.h box.h

imageio.o: imageio.cpp imageio.h

invert.o: invert.cpp invert.h

invert-half.o: invert-half.cpp invert-half.h

box.o: box.cpp box.h


clean:
	rm -f main.o imageio.o invert.o invert-half.o box.o
