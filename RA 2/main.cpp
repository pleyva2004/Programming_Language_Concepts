#include <iostream>
#include <string>
using namespace std;
int main(){

int character; // use int, because char cannot represent EOF
    
    string class_name = "Concepts of Programming Languages";
    
    string mystery = "Programming";
    int start = class_name.find("Programming");
    int end = mystery.length();
    string mySubtring = class_name.substr(start, end);
    mySubtring += " -- testing this feature";

    cout << class_name << "\n" << mySubtring << endl;

    return 0;
}
