#include<iostream>
using namespace std;

int main(){
char ch= 'A';

//print character and its ASCII value 
cout<< "Character :" <<ch<<endl;
cout<<"ASCII Value:" <<(int) ch<<endl;  //65

// Character arithmeetic 
char next= ch + 1;		// 'B' (66)
char prev =ch - 1;		// '@' (64)

cout << "Next character  :" << next<<endl;	//B
cout << "Previous character :" << prev <<endl;	//@

// Convert to uppercase/lowercase
char lower='a';
char upper = lower - 32; 	//'A'

cout<<"Lowercase: " << lower << endl;   //a
cout<<"Uppercase: " << upper << endl;  //A

return 0;
}


