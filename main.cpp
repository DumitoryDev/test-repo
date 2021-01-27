#include <iostream>
#include <exception>

constexpr size_t get_factorial(size_t size)
{

  size_t res{};
  for (size_t i = 1; i <= size; i++)
  {
    res *= i;
  }

  return res;
  
}

int main(void)
{
  try
  {
    std::cout << "Hello, world!" << std::endl;
  }
  catch (const std::exception &error)
  {
    std::cerr << error.what() << std::endl;
  }
  catch (...)
  {
  }

  return 0;
}
