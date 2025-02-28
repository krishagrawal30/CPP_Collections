#include<iostream>
using namespace std;
class sum
{
	int x,y,z;
	public:
		void add()
		{
			cout<<"Enter two number : ";
			cin>>x>>y;
			z=x+y;
			cout<<"Sum of number is : "<<z;
		}
};
int main()
{
	sum sm;
	sm.add();
	return 0;
}
