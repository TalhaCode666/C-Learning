#include <iostream>

/*
https://www.youtube.com/watch?v=8jLOx1hD3_o&t=665s
timestamp: 11:24:16

*/

int main()
{
  // Mem allocation failsafe handling
  // std::exception
  for (size_t i = 0; i < 100; ++i)
  {
    try
    {
      int *data = new int[1000000000];
    }
    catch (const std::exception &e)
    {
      std::cerr << e.what() << '\n';
    }
  }

  // std::nothrow - modern way to do it.

  /*
    for (size_t i = 0; i < 100; ++i)
    {
      int *data = new (std::nothrow) int[1000000000];

      if (data != nullptr)
      {
        std::cout << "Mem allocated successfully!" << std::endl;
      }
      else
      {
        std::cout << "Mem allocation failed!" << std::endl;
      }
    }
  */
  std::cout << "Program worked successfully!" << std::endl;
  return 0;
}