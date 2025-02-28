#include<iostream>
using namespace std;
class account
{
	public:
		int accno;
		string name;
		static float rateofinterest;
		account(int accno , string name)
{
	this->accno=accno;
	this->name=name;
}
void krish()
{
	cout<<accno<<"  "<<name<<endl;
}
};
float account::rateofinterest=6.6;
int main()
{
	account a1=account(201,"Kartik");
	account a2=account(200,"Kanha");
	a1.krish();
	a2.krish();
	return 0;
}
