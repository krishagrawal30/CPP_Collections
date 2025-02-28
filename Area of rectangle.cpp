#include<iostream>
using namespace std;
struct rectangle
{
	public:
	int width;
	int height;	
	rectangle insert(int w,int h)
	{
		width=w;
		height=h;
	}
	void krish()
	{
		cout<<"Enter width of rectangle :"<<endl;
		cin>>width;
		cout<<"Enter height of rectangle :"<<endl;
		cin>>height;
		cout<<"The area of rectangle is: "<<(width*height);
	}
};
int main()
{
	rectangle r;	
	r.krish();
	return 0;
}
