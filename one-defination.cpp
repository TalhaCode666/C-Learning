#include <iostream>
#include <cctype>  // strings manipulation lib
#include <cstring> // C-strings manipulation lib
#include <string>
#include "person.h" // importing self-made header

/*
https://www.youtube.com/watch?v=8jLOx1hD3_o&t=665s
timestamp: 14:01:24

*/

struct Point
{
  int m_x{69};
  double m_y{34.2};
};

// implementation section of person.h, keeping design seperate..
int Person::person_count = 0;

// Constructor implementation
Person::Person(const std::string &names_param, int age_param)
    : full_name(names_param), age(age_param)
{
  person_count++;
}

int main()
{

  Point P1;
  std::cout << "P1.x: " << P1.m_x << std::endl;
  std::cout << "P1.y: " << P1.m_y << std::endl;
  std::cout << "================================" << std::endl;

  std::cout << "Starting count: " << Person::person_count << std::endl;
  
  Person p1("Alice", 22);
  p1.print_info();
  p1.get_name();
  p1.get_age();

  Person p2("Bob", 32);
  p2.print_info();
  p2.get_name();
  p2.get_age();
  
  std::cout << "Count after: " << Person::person_count << std::endl;


  std::cout << "================================" << std::endl;
  std::cout << "Program worked successfully!" << std::endl;
  return 0;
}