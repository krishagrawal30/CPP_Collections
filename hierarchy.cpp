#include<iostream>
using namespace std;
class shape
{
	public:
	int a;
	int b;
	void get_data(int n, int m)
	{
		a=m;
		b=n;
	}
};
class rectangle:public shape
{
	public:
	int rect_area()
	{
		int result=a*b;
		return result;
	}
};
class triangle:public shape
{
	public:
	int tri_area()
	{
		char result=0.5*a*b;
		return result;
	}
};
int main()
{
	rectangle r;
	triangle t;
	int base,height,breath,length;
	cout<<"Enter the length & breath of rectangle: ";
	cin>>length>>breath;
	r.get_data(length , breath);
	int m=r.rect_area();
	cout<<"Area of rectangle : "<<m<<endl;
	cout<<"Enter the base and height :";
	cin>>base>>height;
	t.get_data(base, height);
	int n=t.tri_area();
	cout<<"Area of triangle : "<<n<<endl;
	return 0;
}
