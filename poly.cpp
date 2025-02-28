#include<iostream>
using namespace std;
class Animal
{
	public:
		void eat()
		{
			cout<<"Eating _ _ _  _ _  _ _ _";
		}
};
class Dog:public Animal
{
	public:
		void eat()
		{
			cout<<"Eating bread  _ _ _  _ _  _ _ _";
		}
};
int main()
{
	Dog d=Dog();
	d.eat();
	return 0;
}
