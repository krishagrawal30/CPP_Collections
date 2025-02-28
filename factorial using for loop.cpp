#include<iostream>
using namespace std;
int main()
{
	int n,a;
	cout<<"Enter the number whose factorial you want to print : ";
	cin>>n;
	for(int i=1;i<n;i++)
	{
		n=n*(n-1);
		cout<<n<<endl;
	}
	
	return 0;
}
