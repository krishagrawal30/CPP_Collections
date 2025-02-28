#include<iostream>
using namespace std;
int main()
{
	int n,i=0,j[10];
	cout<<"Enter the decimal number which you want to convert to binary : ";
	cin>>n;
	while(n>0)
	{
		j[i]=n%2;
		n=n/2;
		i++;
	}
	cout<<"The binary form of is : ";
	for(i=i-1;i>=0;i--)
	{
		cout<<j[i];
	}
	return 0;
}
