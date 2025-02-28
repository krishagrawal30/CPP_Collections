#include<iostream>
using namespace std;
int main()
{
	int size;
	int*arr=new int[size];
	cout<<"Enter the size of the array:"<<endl;
	cin>>size;
	cout<<"Enter the element:"<<endl;
	for(int i=0;i<size;i++)
	{
		cin>>arr[i];
	}
	cout<<"The elements you have entered are: ";
	for(int i=0;i<size;i++)
	{
		cout<<arr[i]<<"  ";
	}
	delete arr;
	return 0;
}
