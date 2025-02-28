#include<iostream>
using namespace std;
class animal
{
	public:
		void eat()
		{
			cout<<"Eating ........"<<endl;
		}
};
class dog:public animal
{
	public :void bark()
	{
		cout<<"Barking........"<<endl;
	}
};
class babydog:public dog
{
	public:
		void weep()
		{
			cout<<"Weeping........."<<endl;
		}
};
int main()
{
	babydog d;
	d.eat();
	d.bark();
	d.weep();
	return 0;
}
