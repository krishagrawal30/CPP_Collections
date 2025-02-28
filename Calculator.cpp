#include<iostream>
using namespace std;
int main()
{
	int a,b;
	string c;
	cout<<"Enter any two number : ";
	cin>>a>>b;
	cout<<"\nPress + for addition.";
	cout<<"\nPress - for substraction.";
	cout<<"\nPress * for multiplication.";
	cout<<"\nPress / for division.";
	cout<<"\nPress % to find remainder.";
	cout<<"\nPress p to fine percentage."<<endl;
	cout<<"\nEnter appropriate symbol for operation you want perform.... ";
	cin>>c;
	if(c=="+")
	{
		cout<<"Addition of "<<a<<" and "<<b<<" is : "<<a+b;
	}
	else if(c=="-")
	{
		cout<<"Subtraction of "<<a<<" and "<<b<<" is : "<<a-b;
	}
	else if(c=="*")
	{
		cout<<"Multiplication of "<<a<<" and "<<b<<" is : "<<a*b;
	}
	else if(c=="/")
	{
		cout<<"Division of "<<a<<" and "<<b<<" is : "<<a/b;
	}
	else if(c=="%")
	{
		cout<<"Remainder obtained after division of "<<a<<" and "<<b<<" is : "<<a%b;
	}
	else if(c=="p")
	{
		cout<<"Percentage of "<<a<<" and "<<b<<" is : "<<(a*100)/b<<"%";
	}
	else
	{
		cout<<"Invalid operation.....";
	}
	return 0;
}
