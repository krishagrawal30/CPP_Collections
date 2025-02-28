#include<iostream>
using namespace std;
int main()
{
	int n,m,result;
	cout<<"Enter the number : ";
	cin>>n;
	m=n/2;
	if(n==1)
	{
		cout<<"It is not a prime number.....";
	}
	else
	{
	for(int i=2;i<m;i++)
	{
		if(n%i==0)
		{
			cout<<"It is not a prime number.....";
			result=1;
			break;
		}
	}
	if(result==0)
		{
			cout<<"It is a prime number.....";
		}
}
 	return 0;
}

