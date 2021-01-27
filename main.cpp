#include <iostream>
#include <exception>

int main(void)
{
   try
   {
       
   }
   catch(std::exception const & error)
   {
     std::cerr << error.what() << std::endl;
   }

   return 0;
}
