main: main.o imageio.o invert.o invert-half.o box.o frame.o pixelate.o scale.o
	g++ -o main main.o imageio.o invert.o invert-half.o box.o frame.o pixelate.o scale.o

main.o: main.cpp imageio.h invert.h invert-half.h box.h frame.h pixelate.h scale.h

imageio.o: imageio.cpp imageio.h

invert.o: invert.cpp invert.h

invert-half.o: invert-half.cpp invert-half.h

box.o: box.cpp box.h

frame.o: frame.cpp frame.h

scale.o: scale.cpp scale.h

pixelate.o: pixelate.cpp pixelate.h

clean:
	rm -f main.o imageio.o invert.o invert-half.o box.o frame.o pixelate.o scale.o
