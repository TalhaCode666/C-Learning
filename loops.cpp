#include <iostream>

/*
https://www.youtube.com/watch?v=8jLOx1hD3_o&t=665s
timestamp: 8:47:10
*/

int main()
{
  size_t i{};
  const size_t counter{10};
  for (; i < counter; ++i)
  {
    /* code */
    if (i % 3 != 0)
    {
      std::cout << "Skipped Loop #" << i << std::endl;
      continue;
    }
    std::cout << "Loop Count #" << i << std::endl;
  }

  std::cout << std::endl;
  std::cout << "============= For Loop Ends here! =============" << std::endl;
  std::cout << std::endl;

  while (i <= counter)
  {
    std::cout << "while loop #" << i << std::endl;
    --i;
  }

  std::cout << std::endl;
  std::cout << "============= While Loop Ends here! =============" << std::endl;
  std::cout << std::endl;

  do
  {
    ++i;
    std::cout << "do-while loop #" << i << std::endl;
  } while (i < counter);

  return 0;
}