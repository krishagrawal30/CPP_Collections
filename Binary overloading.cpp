#include<iostream>
using namespace std;
class complex
{
	int a,b;
	public:
		void get_value()
		{
			cout<<"Enter the value of complex number a,b : ";
			cin>>a>>b;
		}
		complex operator+(complex ob)
		{
			complex t;
			t.a=a+ob.a;
			t.b=b+ob.b;
			return(t);
		}
		complex operator-(complex ob)
		{
			complex t;
			t.a=a-ob.a;
			t.b=b-ob.b;
			return(t);
		}
		void krish()
		{
			cout<<a<<"+"<<b<<"\n";
		}
		void agrawal()
		{
			cout<<a+b<<endl;
		}
		void kartik()
		{
			cout<<a<<"-"<<b<<"\n";
		}
		void rachit()
		{
			cout<<a-b<<endl;
		}
};
 int main ()
{
	complex c1,c2,r1,r2;
	c1.get_value();
	c2.get_value();
	r1=c1+c2;
	r2=c1-c2;
	cout<<"Input value : "<<endl;
	c1.krish();
	c2.krish();
	cout<<"Result : ";
	r1.agrawal();
	cout<<"Input value : "<<endl;
	c1.kartik();
	c2.kartik();
	cout<<"Result : ";
	r2.rachit();
	return 0;
}
