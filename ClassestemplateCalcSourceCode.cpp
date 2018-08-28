#include<iostream>
using namespace std;
template <class T>
class Calculator
{
	private:
		T num1, num2;
	public:
		Calculator(T n1, T n2)
		{num1 = n1;num2 = n2;}
		void addition()
		{cout<<"\n\t\tAddition of two number --> "<<add()<<endl;}
		void subtraction()
		{cout<<"\n\t\tSubtraction of two number --> "<<subtract()<<endl;}
		void multiplication()
		{cout<<"\n\t\tMultiplication of two number --> "<<multy()<<endl;}
		void divide()
		{cout<<"\n\t\tDivision of two number --> "<<division()<<endl;}
		T add()
		{return num1+num2;}
		T subtract()
		{return num1-num2;}
		T multy()
		{return num1*num2;}
		T division()
		{return num1/num2;}
};
int main()
{
	int choice;
	char ch;
	cout<<"\n\t\t\t\tWhat do you want to calculate?"<<endl;
	cout<<"\n\n\t\t1) Simple Addition		5) Point values Addition"<<endl;
	cout<<"\t\t2) Simple Subtraction		6) Point values Subtraction"<<endl;
	cout<<"\t\t3) Simple Multiplication	7) Point values Multiplication"<<endl;
	cout<<"\t\t4) Simple Division		8) Point values Division"<<endl;
	do{
	cout<<"Enter your choice: ";
	cin>>choice;
	switch(choice)
	{
		case 1:
			{
				int n1, n2;
				cout<<"\n\t\tEnter a first number: ";cin>>n1;
				cout<<"\t\tEnter a second number: ";cin>>n2;
				Calculator<int>intCalc(n1,n2);
				intCalc.addition();
				break;
			}
		case 2:
			{
				int n1, n2;
				cout<<"\n\t\tEnter a first number: ";cin>>n1;
				cout<<"\t\tEnter a second number: ";cin>>n2;
				Calculator<int>intCalc(n1,n2);
				intCalc.subtraction();
				break;
			}
		case 3:
			{
				int n1, n2;
				cout<<"\n\t\tEnter a first number: ";cin>>n1;
				cout<<"\t\tEnter a second number: ";cin>>n2;
				Calculator<int>intCalc(n1,n2);
				intCalc.multiplication();
				break;
			}
		case 4:
			{
				int n1, n2;
				cout<<"\n\t\tEnter a first number: ";cin>>n1;
				cout<<"\t\tEnter a second number: ";cin>>n2;
				Calculator<int>intCalc(n1,n2);
				intCalc.divide();
				break;
			}
		case 5:
			{
				float n1, n2;
				cout<<"\n\t\tEnter a first number: ";cin>>n1;
				cout<<"\t\tEnter a second number: ";cin>>n2;
				Calculator<float>floatCalc(n1,n2);
				floatCalc.addition();
				break;
			}
		case 6:
			{
				float n1, n2;
				cout<<"\n\t\tEnter a first number: ";cin>>n1;
				cout<<"\t\tEnter a second number: ";cin>>n2;
				Calculator<float>floatCalc(n1,n2);
				floatCalc.subtraction();
				break;	
			}
		case 7:
			{
				float n1, n2;
				cout<<"\n\t\tEnter a first number: ";cin>>n1;
				cout<<"\t\tEnter a second number: ";cin>>n2;
				Calculator<float>floatCalc(n1,n2);
				floatCalc.multiplication();
				break;
			}
		case 8:
			{
				float n1, n2;
				cout<<"\n\t\tEnter a first number: ";cin>>n1;
				cout<<"\t\tEnter a second number: ";cin>>n2;
				Calculator<float>floatCalc(n1,n2);
				floatCalc.divide();
				break;
			}
		default:
			{
				cout<<"Invalid Choice";
				break;
			}
	}
	cout<<"\n\nDo you want to back (y/n)?";
	cin>>ch;
	}
	while(ch=='y' || ch=='Y');
	return 0;
}
