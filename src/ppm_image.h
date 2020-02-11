#ifndef PPM_IMAGE
#define PPM_IMAGE

#include <vector>

class PPM_Image
{
  public:

    void save(const std::string& path, const int *color, const int *width, const int *height);
};

#endif