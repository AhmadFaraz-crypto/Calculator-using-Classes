#include<iostream>
#define ADD +
#define SUBTRACT -
#define MULTIPLY *
#define DIVIDE /
using namespace std;
int main()
{
	int a, b, add, sub, multy, choice;
	float div;
	char ch;
	cout<<"\n\t\t1 --> Addition"<<endl;
	cout<<"\t\t2 --> Subtraction"<<endl;
	cout<<"\t\t3 --> Multiplication"<<endl;
	cout<<"\t\t4 --> Division"<<endl;
	cout<<"Enter a first number: ";cin>>a;
	cout<<"Enter a second number: ";cin>>b;
	do{
	cout<<"Enter a choice: ";cin>>choice;
	switch(choice)
	{
		case 1:
			{
				add=a ADD b;
				cout<<"Addition of two numbers "<<a<<"+"<<b<<" = "<<add<<endl;
				break;
			}
		case 2:
			{
				sub=a SUBTRACT b;
				cout<<"Subtraction of two numbers "<<a<<"-"<<b<<" = "<<sub<<endl;
				break;
			}
		case 3:
			{
				multy=a MULTIPLY b;
				cout<<"Mltiplication of two numbers "<<a<<"*"<<b<<" = "<<multy<<endl;
				break;
			}
		case 4:
			{
				if(b>0)
					{
					div=((float)a/b);
					cout<<"DIVISION of two numbers "<<a<<"/"<<b<<" = "<<div<<endl;
					}
				else
					{
					cout<<"Division is not possible";
					}
			}
		}
		cout<<"\n\nDo you want to back (y/n)?";
		cin>>ch;
	}
		while(ch=='y' || ch=='Y');
		return 0;
}
