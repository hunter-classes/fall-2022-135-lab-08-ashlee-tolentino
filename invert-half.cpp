/*
Author: Ashlee Tolentino
Course: CSCI-135
Instructor: Michael Zamansky
Assignment: Lab8

This program contains a function that inverts the colors only in the right half of the picture.
*/

#include <iostream>
#include <string>
#include "invert-half.h"
#include "imageio.h"

// This function inverts all colors, so white shades become black and black shades become white.
void invertHalf(std::string filename, int image[MAX_H][MAX_W], int &height, int &width)
{
  for(int r = 0; r < height; r++)
  {
    for(int c = width/2; c < width; c++)
    {
      int num = image[r][c];
      image[r][c] = 255 - num;
    }
  }
}
