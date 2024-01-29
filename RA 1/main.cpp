#include <iostream>
#include <string>
using namespace std;

int main() {

    string f_name;
    string l_name;
    int section_num;

    cout << "Please enter your first name >>";
    cin >> f_name;

    cout << "Please enter your last name >>";
    cin >> l_name;

    cout << "Please enter your CS 280 section number >>";
    cin >> section_num;

    string result = "Hello " +  f_name + ", welcome to CS 280 section " + to_string(section_num);
    cout << result << endl;


    return 0;
}
