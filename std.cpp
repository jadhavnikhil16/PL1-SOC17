#include<iostream>
#include<string>
using namespace std;

class Student
{
double rn=0,per=0,total=0;
float marks[3];
string result;
string name;

public:
void acceptDetails()
{
	cout<<"Enter you Roll no";
	cin>>rn;

	cout<<"Enter you name";
	cin>>name;

	cout<<"Enter marks for 3 subjects ";
		for(int i=0;i<3;i++)
			{
				cin>>marks[i];
			}
}

void calculateResult()
{
	total=0;

	for(int i=0;i<3;i++)
		{
			total+=marks[i];
		}


per=total/3.0;

	if(per>=60) 
	{
 	result="First class";
	}
	else if(per>=50) 
	{
 	result="Second class";
	}
	else if (per>40)
 	{
 	result="pass";
	}

	else 
	{
		result="fail";
	}
}

void displayDetails()
{

	cout<<"\n-----stu details-----"<<endl;
	cout<<"Roll number of the student "<<rn<<endl;
	cout<<"Name of the student "<<name<<endl;
	cout<<"Marks : ";

	for(int i=0;i<3;i++)
	{
		cout<<marks[i]<<" ";
	}

	cout<<endl;
	cout<<"Total Marks "<<total<<endl;
	cout<<"Percentage "<<per<<endl;
	cout<<"Result " <<result<<endl;
	}
};

int main()
{
	Student s;
	s.acceptDetails();
	s.calculateResult();
	s.displayDetails();
	return 0;
}

