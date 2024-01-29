#include <iostream> 
#include <string>
using namespace std;

/*
This library is for input and out stream.
It is a standard library
*/

int main(){
      int a = 1;
      int b = 2; 
      cout << a << ", "<< b <<"\n"; 

      const double pi = 3.14;
      cout << pi << " is a constant" << "\n"; 


      string name;
      cout << "What is your name:";
      cin >> name;
      cout << "Hi " + name + ", welcome to C++! " + "\n" + "This is the language you will be using for CS 280." << endl;
      
      return 0;
}



