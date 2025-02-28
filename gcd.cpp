#include<iostream>
using namespace std;
int main()
{
	int n,m,k,l;
	cout<<"Enter first number : ";
	cin>>n;
	cout<<"Enter second number : ";
	cin>>m;
	if(n>m)
	{
		for(int i=1;i<=n;i++)
		{
			if(n%i==0)
			{
				if(m%i==0)
				{
					k=i;
				}
			}
		}
	}
	else if(m>n)
	{
		for(int i=1;i<=m;i++)
		{
			if(m%i==0)
			{
				if(n%i==0)
				{
					k=i;
				}
			}
		}
	}
	else if(m==n)
	{
		k=m;
	}
	else
	{
		k==1;
	}
	cout<<"The Greatest Common Divisor of "<<n<<" and "<<m<<" is : "<<k;
	return 0;
}	
