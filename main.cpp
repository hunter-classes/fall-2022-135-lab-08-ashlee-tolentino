/*
Author: Ashlee Tolentino
Course: CSCI-135
Instructor: Michael Zamansky
Assignment: Lab8

This program...
*/

#include <iostream>
#include <string>
#include "imageio.h"
#include "invert.h"

int main()
{
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

  return 0;
}
