#include<iostream>
using namespace std;
class employee
{
	public:
		employee()
		{
			cout<<"Default constructor involved"<<endl;
			
		}
};
int main()
{
	employee e1;
	employee e2;
	return 0;
}
