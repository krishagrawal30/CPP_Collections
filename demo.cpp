#include<iostream>
#include<iomanip>
using namespace std;
long comb(int n,int k);
int main()
{
	const int m=5;
	for(int i=0;i<m;i++)
	{
		for(int j=1;j<m-i;j++)
		{
			cout<<setw(2)<<endl;
		}
		for(int j=0;j<=i;j++)
		{
			cout<<setw(4)<<comb(i,j);
		}
	}
}
long comb(int n,int k)
{
	if(n<0||k<0||k>n)
	{
		return 0;
	}
	long c=1;
	for(int i=1;i<=k;i++,n--)
	c=c*n/i;
	return c;
}
