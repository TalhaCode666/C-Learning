#include <iostream>
#include <cctype> // strings manipulation lib
#include <string>
#include "compare.h"   // functions declaration
#include "compare.cpp" // functions defination

/*
https://www.youtube.com/watch?v=8jLOx1hD3_o&t=665s
timestamp: 15:42:33

*/

int main()
{

  int result{};

  result = Usermax(15, 20);
  std::cout << "Max: " << result << std::endl;

  result = Usermin(15, 30);
  std::cout << "Min: " << result << std::endl;

  result = Useravg(2, 78);
  std::cout << "Avg: " << result << std::endl;

  std::cout << "================================" << std::endl;
  std::cout << "Program worked successfully!" << std::endl;
  return 0;
}

/*
this lesson was about compilor.. and its 3 steps process.

1. preprocessor
2. compilation
3. Linker

We demonstrated this via declaring in one file, definining in another, and using in the main file.
Basically, the preprocessor is getting things together (Translating Unit), making it into the object code, by linking it together to form .exe file to run.

in our example:

1. main-function-file.cpp is where we're using it by importing/including it on top.
2. compare.cpp is where we're defining the functions.
3. compare.h is where we're declaring it.

*/