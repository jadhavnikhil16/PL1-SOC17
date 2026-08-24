#include<iostream>
using namespace std;

int main()
{
int age=20,marks=75,score=85;

//comparison opretors return boolean
bool isAdult = (age>=18);			//true(1)
bool isPassed = (marks>=40);			//true(1)
bool isTopper=(score>=90);			//false(0)

cout<<"Is Adult?  "<<isAdult<<endl;
cout<<"Is Passed? "<<isPassed<<endl;
cout<<"Is Topper? "<<isTopper<<endl;

return 0;
}


