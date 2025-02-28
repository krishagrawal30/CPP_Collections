#include<iostream>
using namespace std;
class student
{
	public :
		int id;
		string name;
		void insert (int i, string n)
		{
			id=i;
			name=n;
		}
		void display()
		{
			cout<<id<<" "<<name<<endl;
		}
};
int main(void)
{
	student s1;
	student s2;
	student s3;
	s1.insert(101,"Krish");
	s2.insert(102,"Masud");
	s3.insert(103,"Harsh");
	s1.display();
	s2.display();
	s3.display();
	return 0;
}
