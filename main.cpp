#include <iostream>
#include <exception>

int main(void)
{
   try
   {
     std::cout << "Hello, world!" << std::endl;       
   }
   catch(std::exception const & error)
   {
     std::cerr << error.what() << std::endl;
   }
   catch(...)
   {
   }

   return 0;
}
