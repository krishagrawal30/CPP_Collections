#include<iostream>
using namespace std;
class Address
{
	public :
		string addressline,city,state;
		Address(string addressline,string city, string state)
		{
			this->addressline=addressline;
			this->state=state;
			this->city=city;
		}
};
class employee
{
	private :
		Address*address;
		public :
			int id;
			string name;
			employee(int id, string name,Address*address)
			{
				this->id=id;
				this->name=name;
				this->address=address;
			}
	void kartik()
{
	cout<<id<<" "<<name<<" "<<address->addressline<<" "<<address->city<<" "<<address->state<<endl;
}		
};
int main()
{
	Address a1=Address("c-16,sec-15","Noida","UP");
	employee e1=employee(101,"krish",&a1);
	e1.kartik();
	return 0;
}

