#include <iostream>
#include <exception>

int main(void)
{
   try
   {
     std::cout << "Hello, world!" << std::endl;       
   }
   catch(const std::exception & error)
   {
     std::cerr << error.what() << std::endl;
   }

   return 0;
}
