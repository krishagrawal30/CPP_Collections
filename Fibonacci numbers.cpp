#include<iostream>
using namespace std;
int main()
{
	int n,m=0,k=1,j;
	cout<<"n is the number of Finobacci numbers you want to print. "<<endl;
	cout<<"Enter the value of n: ";
	cin>>n;
	
	for(int i=0;i<n;i++)
	{
			cout<<"\t"<<m<<endl;
		m=m+k;
		k=j;
		j=m;
	
	}
	return 0;
}
