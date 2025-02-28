#include<iostream>
using namespace std;
class test
{
	int num;
	public:
		test():num(10){}
		void operator++()
		{
			num=num+5;
		}
		void krish()
		{
			cout<<"The count is : "<<num;
		}
};
int main()
{
	test tt;
	++ tt;
	tt.krish();
	return 0;
}
