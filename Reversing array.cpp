#include<iostream>
using namespace std;
int main()
{
	int a[5];
	cout<<"Enter the elements of array";
	for(int i=0;i<5;i++)
	{
		cin>>a[i];
	}
	cout<<"This array in reverse order is as follows....."<<endl;
	for(int i=4;i>=0;i--)
	{
		cout<<a[i]<<"\t";
	}
	return 0;
}
