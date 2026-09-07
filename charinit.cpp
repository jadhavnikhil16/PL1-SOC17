#include<iostream>
using namespace std;
int main()
{
//Declaration
char grade;
char initial;
char symbol;

//initialization with single qoutes
char letter = 'A';
char digit= '5';
char space= ' ';
char special= '@';

cout << "Letter  :" << letter << endl;
cout << "Digit :" << digit << endl;
cout << "Special:" << special << endl;
cout << "Space:" << space << endl;

//size of char 
cout << "Size of char :" << sizeof(char) << "bytes" << endl;

return 0;
}

