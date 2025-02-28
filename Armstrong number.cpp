#include<iostream>
using namespace std;
int main()
{
	int n,k,result,sum=0;
	cout<<"Enter a number : ";
	cin>>n;
	result=n;
	while(n>0)
	{
		k=n%10;
		sum=sum+(k*k*k);
		n=n/10;
	}
	if(result==sum)
	{
		cout<<result<<" is an Armstrong number....";
	}
	else
	{
		cout<<result<<" is not an Armstrong number....";
	}
	return 0;
}
