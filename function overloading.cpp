#include<iostream>
using namespace std;
class cal
{
	public:
		static int add(int a,int b)
		{
			return a+b;
		}
		static int add(int a,int b,int c)
		{
			return a+b+c;
		}
};
int main()
{
	cal c;
	cout<<c.add(10,25)<<endl;
	cout<<c.add(20,30,50);
	return 0;
}
