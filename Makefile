main: main.o imageio.o invert.o invert-half.o box.o frame.o
	g++ -o main main.o imageio.o invert.o invert-half.o box.o frame.o

main.o: main.cpp imageio.h invert.h invert-half.h box.h frame.h

imageio.o: imageio.cpp imageio.h

invert.o: invert.cpp invert.h

invert-half.o: invert-half.cpp invert-half.h

box.o: box.cpp box.h

frame.o: frame.cpp frame.h


clean:
	rm -f main.o imageio.o invert.o invert-half.o box.o frame.o
