#include <iostream>

/*
https://www.youtube.com/watch?v=8jLOx1hD3_o&t=665s
timestamp: 12:44:34

*/

void printArrayFormatted(const int *arr, size_t size)
{
  std::cout << "{";
  for (size_t i{0}; i < size; ++i)
  {
    std::cout << arr[i];
    if (i < size - 1)
    {
      std::cout << ", "; // Only print comma if it's NOT the last element
    }
  }
  std::cout << "}";
}

int main()
{
  const size_t ArraySize{10};

  // dynamically made array with ArraySize slots and each having garbage values
  double *p_salaries{new double[ArraySize]};

  // all values initilized to zero, and nothrow to deal with succesfullness
  int *p_students{new (std::nothrow) int[ArraySize]{}};

  // initilized few, rest would be 0..
  int *p_scores{new (std::nothrow) int[ArraySize]{1, 2, 4, 6, 8}};

  // Print the pointer addresses first
  std::cout << p_salaries << " -- " << p_students << " -- ";

  // Call the function on its own line to print the elements
  if (p_scores != nullptr)
  {
    printArrayFormatted(p_scores, ArraySize);
    std::cout << std::endl;
  }
  else
  {
    std::cout << "Allocation Failed" << std::endl;
  }

  // free'ing up & resetting dynamic arrays
  delete[] p_salaries;
  p_salaries = nullptr;
  delete[] p_scores;
  p_scores = nullptr;
  delete[] p_students;
  p_students = nullptr;

  /*
  dynamic arrys don't work for range-base loops and std::size() just like normal arrays. We've to
  use other kind of loops.
  */
  std::cout << "Program worked successfully!" << std::endl;
  return 0;
}