/*
Author: Ashlee Tolentino
Course: CSCI-135
Instructor: Michael Zamansky
Assignment: Lab8

This program contains a function that pixelates the input image.
*/

#include <iostream>
#include <string>
#include "pixelate.h"
#include "imageio.h"

// This function pixelates the input image.
void pixelate(std::string filename, int image[MAX_H][MAX_W], int &height, int &width)
{
  int count = 0;
  double average = 0;
  
  for(int r = 0; r < height; r += 2)
  {
    for(int c = 0; c < width; c += 2)
    {
      count = 0;
      average = 0;
      count = image[r][c] + image[r][c+1] + image[r+1][c] + image[r+1][c+1];
      average = (int)(count / 4) + 0.5;
      image[r][c] = average;
      image[r][c+1] = average;
      image[r+1][c] = average;
      image[r+1][c+1] = average;
    }
  }
  
}
