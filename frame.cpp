/*
Author: Ashlee Tolentino
Course: CSCI-135
Instructor: Michael Zamansky
Assignment: Lab8

This program contains a function that draws a frame exactly one pixel thick in the middle of the picture.
*/

#include <iostream>
#include <string>
#include "frame.h"
#include "imageio.h"

// This function draws a frame exactly one pixel thick in the middle of the picture.
void frame(std::string filename, int image[MAX_H][MAX_W], int &height, int &width)
{
  for(int r = height/4; r <= height * 0.75; r++)
  {
    for(int c = width/4; c <= width * 0.75; c++)
    {
      if(r == height/4 || r == height * 0.75)
      {
	image[r][c] = 255;
      }
      if(c == width/4 || c == width * 0.75)
      {
	image[r][c] = 255;
      }
    }
  }
}
