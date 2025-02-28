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
		sum=(sum*10)+k;
		n=n/10;
	}
	if(result==sum)
	{
		cout<<result<<" is a Palindrome number....";
	}
	else
	{
		cout<<result<<" is not a Palindrome number....";
	}
	return 0;
}
