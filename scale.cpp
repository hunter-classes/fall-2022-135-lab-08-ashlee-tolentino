/*
Author: Ashlee Tolentino
Course: CSCI-135
Instructor: Michael Zamansky
Assignment: Lab8

This program contains a function that scales the original picture to 200% of its size.
*/

#include <iostream>
#include <string>
#include "scale.h"
#include "imageio.h"

// This function scales the original picture to 200% of its size.
void scale(std::string filename, int image[MAX_H][MAX_W], int &height, int &width)
{
  
  int h = height;
  int w = width;
  int out[MAX_H][MAX_W];

  for(int row = 0; row < h*2; row++) {
    for(int col = 0; col < w*2; col++) {
      out[row][col] = image[row][col];
    }
  } 
  
  for(int r = (h * 2) - 1; r >= 0; r -= 2)
  {
    for(int c = (w * 2) - 1; c >= 0; c -= 2)
    {
      image[r][c] = out[h - 1][w - 1];
      image[r][c - 1] = out[h - 1][w - 1];
      image[r - 1][c] = out[h - 1][w - 1];
      image[r - 1][c - 1] = out[h - 1][w - 1];
      w--;
    }
    h--;
  }
  
}
