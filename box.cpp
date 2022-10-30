/*
Author: Ashlee Tolentino
Course: CSCI-135
Instructor: Michael Zamansky
Assignment: Lab8

This program contains a function that draws a white box exactly in the middle of the picture.
*/

#include <iostream>
#include <string>
#include "box.h"
#include "imageio.h"

// This function draws a white box exactly in the middle of the picture.
void box(std::string filename, int image[MAX_H][MAX_W], int &height, int &width)
{
  for(int r = height/4; r <= height * 0.75; r++)
  {
    for(int c = width/4; c <= width * 0.75; c++)
    {
      image[r][c] = 255;
    }
  }
}
