#include<iostream>
using namespace std;
int main()
{
	string y,a;
	int n,i;
	cout<<"ENTER THE VALUE OF y : ";
	cin>>y;
	if (y=="x^n")
	{
		cout<<"Enter the value of n : ";
		cin>>n;
	    cout<<"dy/dx = "<<n<<".x^"<<n-1<<endl;
	}
	else if (y=="sinx")
	{
		a="cosx";
	}
	else  if( y=="1/x")
	{
		a="-1/x^2";
	}
	else if(y=="cosx")
	{
		a="-sinx";
	}
	else if(y=="tanx")
	{
		a="sec^2x";
	}
	else if(y=="secx")
	{
		a="secx.tanx";
	}
	else if(y=="cotx")
	{
		a="-cosec^x";
	}
	else if(y=="cosecx")
	{
		a="-cosecx.cotx";
	}
	else if(y=="sqrtx")
	{
		a="1/2*1/sqrtx";
	}
	else if(y=="logx")
	{
		a="1/x";
	}
	else
	{
		a="0";
	}
	cout<<" dy/dx = "<<a;
	return 0;
}
