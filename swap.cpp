#include<iostream>
#include<cstring>
using namespace std;
int main()
{
	string r="10";
	string m="20";
	cout<<"Before swap r has "<<r<<" Rupees"<<endl;
	cout<<"Before swap m has "<<m<<" Rupees"<<endl;
	r.swap(m);
	cout<<"After swap r has "<<r<<" Rupees"<<endl;
	cout<<"After swap m has "<<m<<" Rupees"<<endl;
	return 0;
}
