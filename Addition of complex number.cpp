#include<iostream>
using namespace std;
class complex
{
	int a1,a2,a3,i1,i2,i3;
	public:
	void krish()
	{
		cout<<"Enter first complex number {Don't enter 'i'}: ";
		cin>>a1>>i1;
		cout<<"Enter second complex number {Don't enter 'i'}: ";
		cin>>a2>>i2;
	}	
	void add()
	{
		a3=a1+a2;
		i3=i1+i2;
	}
	void agrawal()
	{
		cout<<"The addition of "<<a1<<"+"<<i1<<"i and "<<a2<<"+"<<i2<<"i is "<<a3<<"+"<<i3<<"i";
		
	}
};
int main()
{
	complex c;
	c.krish();
	c.add();
	c.agrawal();
	return 0;
}
