#include<iostream>
using namespace std;
class employee
{
	public:
		int id;
		string name; 
		float salary;
		employee(int i,string n,float s)
		{
			id=i;
			name=n;
			salary=s;
		}
		void display()
		{
			cout<<id<<" "<<name<<" "<<salary<<"\n";
	}
};
int main()
{
	employee e1=employee(101,"Krish",50000);
	employee e2=employee(102,"Masud",40000);
	e1.display();
	e2.display();
	return 0;
}
