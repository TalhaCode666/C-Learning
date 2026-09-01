#include <iostream>
using namespace std;

/*
https://www.youtube.com/watch?v=8jLOx1hD3_o&t=665s
timestamp: 5:40:54
*/

int main()
{
  bool red_light{false};
  bool green_light{true};

  if (red_light)
  {
    std::cout << "Stop, don't drive! " << endl;
  }
  else if (green_light)
  {
    std::cout << "Drive! you're free to go! " << endl;
  }
  else
  {
    std::cout << "Caution / Blink!" << endl; // Runs if both are false
  }
  std::cout << "Red Cast value: " << static_cast<int>(red_light) << endl;
  std::cout << "Green Cast value: " << static_cast<int>(green_light) << endl;

  return 0;
}