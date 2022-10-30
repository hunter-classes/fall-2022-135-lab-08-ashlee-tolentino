/*
Author: Ashlee Tolentino
Course: CSCI-135
Instructor: Michael Zamansky
Assignment: Lab8

This program performs changes to the colors/features of a pgm image file.
*/

#include <iostream>
#include <string>
#include "imageio.h"
#include "invert.h"
#include "invert-half.h"
#include "box.h"
#include "frame.h"

int main()
{
  // Task A
  std::string input = "image1.pgm";
  int img[MAX_H][MAX_W];
  int h, w;
  readImage(input, img, h, w);
  invert(input, img, h, w);

  int out[MAX_H][MAX_W];

  for(int row = 0; row < h; row++) {
    for(int col = 0; col < w; col++) {
      out[row][col] = img[row][col];
    }
  }
  writeImage("taskA.pgm", out, h, w);

  // Task B
  readImage(input, img, h, w);
  invertHalf(input, img, h, w);

  for(int row = 0; row < h; row++) {
    for(int col = 0; col < w; col++) {
      out[row][col] = img[row][col];
    }
  }
  writeImage("taskB.pgm", out, h, w);

  // Task C
  readImage(input, img, h, w);
  box(input, img, h, w);

  for(int row = 0; row < h; row++) {
    for(int col = 0; col < w; col++) {
      out[row][col] = img[row][col];
    }
  }
  writeImage("taskC.pgm", out, h, w);

  // Task D
  readImage(input, img, h, w);
  frame(input, img, h, w);

  for(int row = 0; row < h; row++) {
    for(int col = 0; col < w; col++) {
      out[row][col] = img[row][col];
    }
  }
  writeImage("taskD.pgm", out, h, w);

  //

  return 0;
}
