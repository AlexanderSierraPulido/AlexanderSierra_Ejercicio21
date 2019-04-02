#include <iostream>
#include <random>
#include <stdlib.h>

int main()
    {  
    srand48(8);
    float x = 0;
    float y = 0;
    for (int i=0;i<1000;i++)
        {          
        std::cout << x << " " << y << std::endl;
        float dx = drand48()*10 - 5;
        float dy = drand48()*10 - 5;
        x += dx;
        y += dy;
        }
  
  return 0;
}
