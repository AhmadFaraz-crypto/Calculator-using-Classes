#include<iostream>
using namespace std;
class calculator
{
		public:
			int add(int a, int b){return a+b;}
			int subtract(int a, int b){return a-b;}
			int multy(int a, int b){return a*b;}
			int division(int a, int b){return a/b;}
			int square(int a){return a*a;}
			int cube(int a){return a*a*a;}
			int factorial(int a){if(a==0){return 1;}else if(a<0){return -1;}else{return(a*factorial(a-1));}}
			int table(int a){int t=1;cout<<"Table of "<<a<<"is: "<<endl;for(int i=1;i<=10;i++){t=a*i;cout<<a<<" x "<<i<<" = "<<t<<endl;}return 0;}
			int avg(int a, int b){return (a+b)/2;}
};
int main()
{
	int choice;
	calculator key;
	char ch;
	do
	{
		cout<<"\n\t\tWhat do you want to calculate?"<<endl;
		cout<<"\n\n\t\t1) Addition"<<endl;
		cout<<"\t\t2) Subtraction"<<endl;
		cout<<"\t\t3) Multiplication"<<endl;
		cout<<"\t\t4) Division"<<endl;
		cout<<"\t\t5) Square"<<endl;
		cout<<"\t\t6) Cube"<<endl;
		cout<<"\t\t7) Factorial"<<endl;
		cout<<"\t\t8) Table"<<endl;
		cout<<"\t\t9) AVerage"<<endl;
		cout<<"Enter your choice: ";
		cin>>choice;
		switch(choice)
		{
		case 1:{int x, y,r;cout<<"Enter the first number: ";cin>>x;cout<<"Enter the second number: ";cin>>y;r=key.add(x,y);cout<<"Sum of two numbers is: "<<r;break;}
		case 2:{int x, y, r;cout<<"Enter the first number: ";cin>>x;cout<<"Enter the second number: ";cin>>y;r=key.subtract(x,y);cout<<"Subtract of two number is: "<<r;break;}
		case 3:{int x, y, r;cout<<"Enter the first number: ";cin>>x;cout<<"Enter the second number: ";cin>>y;r=key.multy(x,y);cout<<"Subtract of two number is: "<<r;break;}
		case 4:{int x, y, r;cout<<"Enter the first number: ";cin>>x;cout<<"Enter the second number: ";cin>>y;r=key.division(x,y);cout<<"Divide of two numbers is: "<<r;break;}
		case 5:{int x, r;cout<<"Enter the first number: ";cin>>x;r=key.square(x);cout<<"Square of two numbers is: "<<r;break;}
		case 6:{int x,r;cout<<"Enter the first number: ";cin>>x;r=key.cube(x);break;}
		case 7:{int value, fact;cout<<"Enter a positive number: ";cin>>value;fact=key.factorial(value);cout<<"Factorial of a numbers is: "<<fact;break;}
		case 8:{int n=0;cout<<"Enter a number: ";cin>>n;key.table(n);break;}
		case 9:{int x,y,r;cout<<"Enter the first number: ";cin>>x;cout<<"Enter the second number: ";cin>>y;r=key.avg(x,y);cout<<"Average of two numbers is: "<<r;break;}
		default:{cout<<"Invalid Choice...";break;}			
}
	cout<<"\n\nDo you want to back (y/n)?";
	cin>>ch;
}
while(ch=='y' || ch=='Y');
	return 0;//End
}

