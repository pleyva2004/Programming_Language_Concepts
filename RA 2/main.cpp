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



{
                  "name": "C/C++: g++.exe build and debug active file",
                  "type": "cppdbg",
                  "request": "launch",
                  "program": "${fileDirname}\\${fileBasenameNoExtension}.exe",
                  "args": [],
                  "stopAtEntry": false,
                  "cwd": "${fileDirname}",
                  "environment": [],
                  "externalConsole": false,
                  "MIMode": "gdb",
                  "miDebuggerPath": "C:\\Coding\\mingw64\\bin\\gdb.exe",
                  "setupCommands": [
                        {
                              "description": "Enable pretty-printing for gdb",
                              "text": "-enable-pretty-printing",
                              "ignoreFailures": true
                        },
                        {
                              "description": "Set Disassembly Flavor to Intel",
                              "text": "-gdb-set disassembly-flavor intel",
                              "ignoreFailures": true
                        }
                  ],
                  "preLaunchTask": "C/C++: g++.exe build active file"
            }