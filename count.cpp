#include<iostream>
using namespace std;
int main()
{
	int a,b,c,d,e,f,g,h,i,j,total;
	cout<<"Enter the number of 2000 rupees notes: ";
	cin>>a;
	cout<<"Enter the number of 500 rupees notes: ";
	cin>>b;
	cout<<"Enter the number of 200 rupees notes: ";
	cin>>c;
	cout<<"Enter the number of 100 rupees notes: ";
	cin>>d;
	cout<<"Enter the number of 50 rupees notes: ";
	cin>>e;
	cout<<"Enter the number of 20 rupees notes: ";
	cin>>f;
	cout<<"Enter the number of 10 rupees notes: ";
	cin>>g;
	cout<<"Enter the number of 5 rupees notes: ";
	cin>>h;
	cout<<"Enter the number of 2 rupees coin: ";
	cin>>i;
	cout<<"Enter the number of 1 rupees coin: ";
	cin>>j;
	total=2000*a+500*b+200*c+100*d+50*e+20*f+10*g+5*h+2*i+j;
	cout<<"Total money = rupees "<<total<<" /-"<<endl;
	return 0;
}
