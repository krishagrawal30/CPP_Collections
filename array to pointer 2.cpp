#include<iostream>
using namespace std;
int main()
{
	int ptr1[5];
	int *ptr2[5];
	cout<<"Enter five elements: "<<endl;
	for(int i=0;i<5;i++)
	{
		cin>>ptr1[i];
	}
	for(int i=0;i<5;i++)
	{
		ptr2[i]=&ptr1[i];
	}
	cout<<"The values are :"<<endl;
	for(int i=0;i<5;i++)
	{
		cout<<*ptr2[i]<<endl;
 	}
	return 0;
}
