#include <iostream>
#include <cctype>  // strings manipulation lib
#include <cstring> // C-strings manipulation lib

/*
https://www.youtube.com/watch?v=8jLOx1hD3_o&t=665s
timestamp: 13:41:52

*/

int main()
{
  // checking for alphanum
  char input_char{'A'};
  if (std::isalnum(input_char))
  {
    std::cout << input_char << " is alphanumaric!" << std::endl;
  }
  else
  {
    std::cout << input_char << " is not alphanumaric!" << std::endl;
  }

  std::cout << "================================" << std::endl;

  // checking for blank chars
  char message[]{"Hello! My name is John Doe!"};
  size_t blank_spaces{};

  for (size_t i = 0; i < std::size(message); i++)
  {
    if (std::isblank(message[i]))
    {
      /* code */
      std::cout << "Blank char found at index: [" << i << "]" << std::endl;
      ++blank_spaces;
    }
  }
  std::cout << "Total blanks were: " << blank_spaces << std::endl;

  std::cout << "================================" << std::endl;

  size_t lowercase_chars{};
  size_t uppercase_chars{};

  for (auto charactors : message)
  {
    /* to check for lower */
    if (std::islower(charactors))
    {
      // std::cout << " " << charactors;
      ++lowercase_chars;
    }

    /* to check for upper */
    if (std::isupper(charactors))
    {
      ++uppercase_chars;
    }
  }
  std::cout << "Found: " << lowercase_chars << " lowercase char(s) and "
            << uppercase_chars << " uppercase char(s)." << std::endl;

  std::cout << "================================" << std::endl;

  // pointer being used as array
  const char *Cstring_man{"Hi, i love c plus plus."};

  // strleng ignores null
  std::cout << "strlen(Cstring_man): " << std::strlen(Cstring_man) << std::endl;

  std::cout << "================================" << std::endl;

  // comparing strings set against each other, 0 means equal, -+1 means each char is being judged on its ASCII value, lower means -1, higher means +1

  const char *leftside_str{"Alabama"};
  const char *rightside_str{"AmabalA"};
  size_t cmpstr_chk{1};

  std::cout << "std::strcmp(" << leftside_str << ", " << rightside_str << "): "
            << std::strcmp(leftside_str, rightside_str) << std::endl;

  std::cout << "std::strncmp(" << leftside_str << ", " << rightside_str << "): "
            << std::strncmp(leftside_str, rightside_str, cmpstr_chk) << std::endl;

  std::cout << "================================" << std::endl;

  // compares the target to the given result pointer values, and gets the total instances of target found in it..

  char target = 's';
  const char *result = Cstring_man;
  size_t iterations{};

  while ((result = std::strchr(result, target)) != nullptr)
  {
    /* code */
    std::cout << "Found: " << target << " at index: " << (result - Cstring_man) << '\n';

    ++result; // points to next memory address after finding..
    ++iterations;
  }
  std::cout << "Total instances: " << iterations << std::endl;
  std::cout << "================================" << std::endl;

  char input[]{"C:/Users/Jarvic/Downloads/C++ learning.cpp"};
  char *output = std::strrchr(input, '/'); // strrchar does reverse search, while strchar does first

  if (output)
  {
    std::cout << output + 1 << std::endl;
  }

  std::cout << "================================" << std::endl;
  std::cout << "Program worked successfully!" << std::endl;
  return 0;
}