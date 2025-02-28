#include<iostream>
using namespace std;
namespace first
{
	void sayhello()
	{
		cout<<"Hello first namespace"<<endl;
	}
}
namespace second
{
	void sayhello()
	{
		cout<<"Hello second namespace"<<endl;
	}
}
int main()
{
	first::sayhello();
	second::sayhello();
	return 0;
}
