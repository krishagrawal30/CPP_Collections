#include<iostream>
using namespace std;
class Distance
{
	private:
		int meter;
		friend int addfive(Distance d);
		public:
			Distance():meter(0){}
};
int addfive(Distance d)
{
	d.meter+=5;
	return d.meter;
}

int main()
{
	Distance D;
	cout<<"Distance "<<addfive(D);
	return 0;
}
