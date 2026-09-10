#include <iostream>

/*
https://www.youtube.com/watch?v=8jLOx1hD3_o&t=665s
timestamp: 11:24:16

*/

int main()
{
  // Dynamic Heap based pointers learning

  int *p_number{nullptr};
  p_number = new int;
  *p_number = 77;

  // or you can declaring & inicilizing at same time!
  double *p2_number{new double(17.7)};

  std::cout << "Dynamic mem allocation: " << p_number << " -- Value: " << *p_number << std::endl;
  std::cout << "Dynamic mem allocation: " << p2_number << " -- Value: " << *p2_number << std::endl;

  delete p_number;    // free'ing the mem
  p_number = nullptr; // resetting the pointer

  // safty against dangling pointers, meaning doing delete, and nullptr value after use is best.
  if (p_number != nullptr)
  {
    /* code */
    std::cout << "Dynamic mem allocation: " << p_number
    << " -- Value: " << *p_number << std::endl;
  }
  else
  {
    std::cout << "Invalid memoray address." << std::endl;
  }

  delete p2_number;    // free'ing the mem
  p2_number = nullptr; // resetting the pointer

  return 0;
}