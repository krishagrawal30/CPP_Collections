#include<iostream>
using namespace std;
class shape
{
	public:
	virtual void draw()
	{
		cout<<"Drawing........"<<endl;
	}
};
class rectangle:public shape
{
	void draw()
	{
		cout<<"Drawing rectangle........"<<endl;
	}
};
class circle:public shape
{
	void draw()
	{
		cout<<"Drawing circle........";
	}
};
int main()
{
	shape *s;
	shape sh;
	rectangle rec;
	circle cir;
	s=&sh;
	s->draw();
	s=&rec;
	s->draw();
	s=&cir;
	s->draw();
	return 0;
}

