#include <iostream>
#include <iomanip>
#include <ios>

/*
https://www.youtube.com/watch?v=8jLOx1hD3_o&t=665s
timestamp: 7:02:06
*/

int main()
{
  int col_width = 20;
  std::cout << std::left;
  // std::cout << std::setfill('-');

  std::cout << std::setw(col_width) << "First Name" << std::setw(col_width) << "Last Name" << std::setw(col_width) << "Age" << std::endl;

  std::cout << "---------------------------------------------------" << std::endl;

  std::cout << std::setw(col_width) << "John" << std::setw(col_width) << "Doe" << std::setw(col_width) << "42" << std::endl;

  std::cout << std::setw(col_width) << "Ray" << std::setw(col_width) << "Mavrick" << std::setw(col_width) << "32" << std::endl;

  std::cout << std::setw(col_width) << "Valancia" << std::setw(col_width) << "Simmons" << std::setw(col_width) << "35" << std::endl;

  std::cout << std::setw(col_width) << "Veronica" << std::setw(col_width) << "Baluci" << std::setw(col_width) << "45" << std::endl;

  return 0;
}