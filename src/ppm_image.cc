#include "ppm_image.h"
#include <iostream>

void PPM_Image::save(const std::string& path, const int *color, const int *width, const int *height)
{
  std::cout << "\nfilename is\n";
  std::cout << path.c_str();
  std::cout << "\nwidth is " << *width;
  std::cout << "\nheight is " << *height;
  std::cout << "\ncolor is " << *color;
  std::cout << "\n";

  FILE* file = fopen(path.c_str(), "wt");
  fprintf(file, "P3 %d %d 255\n", *width, *height);

  for (int y = 0; y < *height; y++)
  {
    fprintf(file, "%d %d %d\n", *color, *color, *color);
  }
  fclose(file);
}