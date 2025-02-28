#include<iostream>
using namespace std;
int main()
{
	int x,y,c;
	cout<<"The value of x = ";
	cin>>x;
	cout<<"The value of y = ";
	cin>>y;
	if(y>0)
	{
	if(y>1)
	{
		c=x*x;
		for(int i=2;i<y;i++)
		{
			c=c*x;
		}
	}
	else if(y=1)
	{
		c=x;
	}
	cout<<"The value of x^y = "<<c<<endl;
}
else
{
	cout<<"The value of x^y = 1";
}
	return 0;
}
