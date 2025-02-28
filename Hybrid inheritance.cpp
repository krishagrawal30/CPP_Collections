#include<iostream>
using namespace std;
class A
{
	protected:
		int a;
		void get_a()
		{
			cout<<"Enter the value of a : ";
			cin>>a;
		}
};
class B:public A
{
	protected:
		int b;
		void get_b()
		{
			cout<<"Enter the value of b : ";
			cin>>b;
		}
};
class C
{
	protected:
		int c;
		void get_c()
		{
			cout<<"Enter the value of c : ";
			cin>>c;
		}
};
class D:public B,public C
{
	protected:
		int d;
		public:
		void navika()
		{
			get_a();
			get_b();
			get_c();
			cout<<"Multiplication of a,b&c is: "<<a*b*c;
		}
};
int main()
{
	D d;
	d.navika();
	return 0;
}
