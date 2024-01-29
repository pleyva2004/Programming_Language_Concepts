#include <iostream>
#include <string>
#include <cctype>
#include <sstream>
#include <fstream>
#include <iomanip>
using namespace std;

int main(){
      

      ifstream infile;
      string fileName;
      string longest_line = "";
      string longest_word = "";
      string line;
      string word;


      int line_count = 0; 
      int specified_count = 0;
      int word_count = 0;

      // Prompt
      cout << "Enter input file name: "<< endl; 
      cin >> fileName;

      cout << endl;

      infile.open(fileName.c_str());

	if(!infile){
		cerr << endl;
		cerr << "File cannot be opened" << " " << fileName << endl;
		exit (1);
	}
      else{
            while (getline(infile, line)) {
                  line_count++;
                  int line_length = line.length();

                  //comparing lines to find the longest line
                  if (line_length > longest_line.length()){
                        longest_line = line;
                  }


                  //finding lines that are commented
                  if (line.find("#") < line_length || line.find("//") < line_length){
                        specified_count++;    
                  }

                        
                  //counting number of words
                  istringstream lineStream (line);
                  if( line_length ){
                        while (lineStream >> word){
                              //skipping commented lines
                              if (line.find("#") < line_length || line.find("//") < line_length){
                                    break;
                              }
                              else{
                                    //comparing current word to saved longest word
                                    if(word.length() > longest_word.length()){
                                          longest_word = word;
                                    }

                                    //increase word count
                                    word_count++;
                              }
                        }       
                  }
            }

            // Print output (read from file) in Console
            cout << "Total Number of Lines: " << line_count << endl;
            cout << "Number of non-commented lines: " << line_count - specified_count << endl;
            cout << "Line of Maximum Length: " << "\"" << longest_line << "\"" << endl;
            cout << "Number of Words: " << word_count << endl;
            cout << "Word of Maximum Length: " << "\"" << longest_word << "\"" << endl;

      // Close the file
      infile.close();
      
      }
      return 0;
}




