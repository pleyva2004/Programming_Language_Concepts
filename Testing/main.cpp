#include <iostream> 

/*
This library is for input and out stream.
It is a standard library
*/

int main(){
      int a = 1;
      int b = 2; 
      std::cout << a << ", "<< b <<"\n"; 

      int temp;
      temp = a;
      a = b;
      b = temp;

      std::cout << a << ", "<< b <<"\n";

      const double pi = 3.14;
      std::cout << pi << " is a constant"; 
      return 0;
}



