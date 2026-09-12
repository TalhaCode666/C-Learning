#include <iostream>
#include <cctype>  // strings manipulation lib
#include <cstring> // C-strings manipulation lib
#include <string>

/*
https://www.youtube.com/watch?v=8jLOx1hD3_o&t=665s
timestamp: 14:01:24

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

  char dest_str[10]{"Hello "};
  char src_str[10]{"World!"};
  size_t char_count{2};

  std::cout << "Strings: " << dest_str << "& " << src_str << " Concat into: " << std::strcat(dest_str, src_str) << std::endl;

  // concat method which also takes no of chars to do from src to dest...
  std::cout << "Strings: " << dest_str << " -- Concat into: " << std::strncat(dest_str, src_str, char_count) << std::endl;

  char *dest1 = new char[30]{'L', 'o', 'r', 'd', '\0'};
  char *src1 = new char[30]{' ', 'o', 'f', ' ', 't', 'h', 'e', ' ', 'r', 'i', 'n', 'g', '\0'};

  // 1. Move strncpy here so it uses the original, fresh buffers
  std::strncpy(dest1, src1, 5);
  dest1[5] = '\0'; // 2. CRITICAL: Manually add null-terminator to prevent garbage output
  std::cout << "std::strncpy(dest1): [" << dest1 << "]" << std::endl;

  std::strcpy(dest1, "Lord"); // reseting the value to perform below tasks..
  std::cout << "std::strcat(dest1):  " << std::strcat(dest1, src1) << std::endl;
  std::cout << "std::strcpy(dest1):  " << std::strcpy(dest1, src1) << std::endl;

  delete[] dest1;
  dest1 = nullptr;
  delete[] src1;
  src1 = nullptr;
  std::cout << "================================" << std::endl;

  // using std::string lib to do same things
  std::string ini_message_str{"I am sunny."};
  std::string ini_fullname_str{};
  std::string ini_weried_str(5, 'e');
  std::string ini_rep_message_str{"Hello there.", 5};
  std::string ini_split_message_str{ini_message_str, 5, 6};
  std::string ini_holder_message_str{ini_message_str};

  std::cout << "String: " << ini_message_str << std::endl;                     // prints string.
  std::cout << "Initilizing string: " << ini_fullname_str << std::endl;        // prints nothing, cuz' empty..
  std::cout << "Repeat string: " << ini_weried_str << std::endl;               // prints reapter..
  std::cout << "String from 5th: " << ini_rep_message_str << std::endl;        // prints first 5 chars.
  std::cout << "Spliting from 6th: " << ini_split_message_str << std::endl;    // prints after the 5th and goes to till 6th.
  std::cout << "Strings placeholder: " << ini_holder_message_str << std::endl; // placeholder for string from another

  std::cout << "================================" << std::endl;

  std::cout << "Program worked successfully!" << std::endl;
  return 0;
}