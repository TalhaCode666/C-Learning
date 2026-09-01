#include <iostream>

/*
https://www.youtube.com/watch?v=8jLOx1hD3_o&t=665s
timestamp: 7:52:28
*/

int main()
{
  int a{23};
  float b{155.2};
  bool speed{};

  auto final = a > b ? a * a : b / 2;
  std::cout << "Calculated speed: " << final << std::endl;

  speed = final > 25 ? true : false;
  std::cout << "overspeeding? (above 25kmp/h): " << std::boolalpha << speed << std::endl;

  return 0;
}