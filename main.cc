#include "src/ppm_image.h"
#include <iostream>
#include <stdio.h>
#include <string>

int main(int argc, char **argv)
{
  PPM_Image Image;

  std::cout << "Hi";

  int width = 1000;
  int height = 1000;
  int color = 100;
  // const std::string path("test.txt");

  Image.save("test.ppm", &color, &width, &height);
  Image.save("test.txt", &color, &width, &height);
}