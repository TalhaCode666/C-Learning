#include <iostream>

/*
https://www.youtube.com/watch?v=8jLOx1hD3_o&t=665s
timestamp: 10:14:49

*/

int main()
{
  // stack based pointers learning 

  int* p_number{nullptr};
  int value_store{42};
  double* p2_number{nullptr};
  const char* p_message{nullptr};
  char message[]{"Hello World!"};

  // doesn't matter the type, size of pointers stays same because it only stores address of data
  std::cout << "Size of pointers are same: " << sizeof(p_number) << std::endl;
  std::cout << "Size of pointers are same: " << sizeof(p2_number) << std::endl;
  std::cout << "Size of int* pointer is same: " << sizeof(int *) << std::endl;
  std::cout << "Size of double* pointer is same: " << sizeof(double *) << std::endl;

  p_number = {&value_store}; // stored value_store address to p2_number
  std::cout << "Address: " << p_number 
  << " -- Value: " << *p_number << std::endl; // refrencing addressess
  
  p_message = message; // pointing to an array, but with const so, nothing changes.. 
  const char* p_mover  = message; // incrementing the pointer to point to other chars in array
  p_mover += 6; //moving 6 bytes forward.
  
  std::cout << p_message
  << " -- Adress: " << &p_message 
  << " -- Value: " << *p_message // points to the first char in array. 
  << " -- Pointer Moved: " << p_mover 
  << " -- Pointer De-refrenced: " << *p_mover << std::endl; 
  
  
  return 0;
}