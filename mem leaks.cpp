#include <iostream>

/*
https://www.youtube.com/watch?v=8jLOx1hD3_o&t=665s
timestamp: 11:56:02

*/

int main()
{
  // mem leaks
  // via pointer reassigning
  int *p_numb{new int{69}};
  int numb{55};
  p_numb = &numb; // BAD! we lost p_numb dynamic allocated address..

  // double allocation
  int *p_numb2{new int{23}};
  p_numb2 = new int{97}; // mem with 23 is leaked. no way of recovering.

  // block scoped pointer, global scoped heap mem, and we didn't deleted the mem and lost access outside.
  {
    int *p_numb3{new int{23}};
  }

  std::cout << "Program worked successfully!" << std::endl;
  return 0;
}