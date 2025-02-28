#include<iostream>
using namespace std;
class A
{
	public :
		int x;
		A(int a)
		{
			x=a;
		}
		A(A&i)
		{
			x=i.x;
		}
		void display()
		{
			cout<<x<<endl;
		}
};
int main()
{
	A a1(20);
	A a2(a1);
	a1.display();
	a2.display();
	return 0;
}
