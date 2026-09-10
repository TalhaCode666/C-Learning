#include <iostream>

/*
https://www.youtube.com/watch?v=8jLOx1hD3_o&t=665s
timestamp: 9:26:49

*/

int main()
{
  int scores[]{10, 21, 33, 53};
  int sum{};
  for (size_t i{}; i < std::size(scores); ++i)
  {
    scores[i] = scores[i] * 2; // 2x'ing value of array
    sum += scores[i]; // suming up the array
    std::cout << "Loop Count #" << i << " -- scores[" << scores[i] <<"]" << std::endl;
    std::cout << "Sum Total: " << sum << std::endl;
  }

  std::cout << std::endl;
  std::cout << "============= For Loop Ends here! =============" << std::endl;
  std::cout << std::endl;

  for (auto value : scores)
  {
    /* code */
    std::cout << "Range based value loop: " << value << std::endl;
  }

  return 0;
}