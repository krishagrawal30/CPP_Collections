#include<iostream>
using namespace std;
int main()
{
	int *ptr;
	int marks[5];
	cout<<"Enter the elements of array: ";
	for(int i=0;i<5;i++)
	{
		cin>>marks[i];
	}
	ptr=marks;
	cout<<"The value of *ptr is:"<<*ptr<<endl;
	cout<<"The value of *marks is:"<<*marks<<endl;
	return 0;
}
