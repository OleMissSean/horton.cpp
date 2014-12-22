/*
Sean Staz
CSC 2134
Program Horton
This program will quote Dr. Seuss's Horton Hatches the Egg with asterisks as a border.
*/

#include <iostream>
#include <string>

using namespace std; 


const string LINE = "***************************";  // Produces a line
const string FONT1 = "* I meant what I said     *";
const string FONT2 = "* and I said what I meant *";
const string FONT3 = "* An elephant's faithful  *";
const string FONT4 = "* one hundred percent     *";

int main ()
{
  string lineRow;            // A line
  
  // Create a black-white row by concatenating the basic strings
  lineRow = LINE;
                          
  cout << lineRow << endl;
  cout << FONT1 << endl;
  cout << FONT2 << endl;
  cout << FONT3 << endl;
  cout << FONT4 << endl;
  cout << lineRow << endl;
  

  return 0;                  
}      
