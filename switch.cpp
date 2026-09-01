#include <iostream>

/*
https://www.youtube.com/watch?v=8jLOx1hD3_o&t=665s
timestamp: 7:42:44
*/

const int Circle{23};
const int Ellipse{32};
const int Rectangle{12};
const int Marker{22};
const int Pen{52};
const int Pencil{55};

int main()
{
  int tool = {Pencil};

  switch (tool)
  {
  case Ellipse:{
    std::cout << "Active tool is an Ellipse!" << std::endl;
  }
  break;

  case Rectangle:{
    std::cout << "Active tool is Rectangle!" << std::endl;
  }
  break;

  case Circle:{
    std::cout << "Active tool is a Circle!" << std::endl;
  }
  break;
  
  case Marker:
  case Pen:
  case Pencil:{
    std::cout << "Active tool is either Marker/Pen/Pencil!" << std::endl;
  }
  break;

  default:{
    std::cout << "There is no such tool available!" << std::endl;
  }
  break;
  
  }
  
  std::cout << "Moving on from switch!" << std::endl;

  return 0;
}