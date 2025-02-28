#include<iostream>
#include<fstream>
using namespace std;
int main()
{
	ofstream filestream("testout.txt");
	if(filestream.is_open())
	{
		filestream<<"WELCOME TO C++"<<endl;
		filestream<<"C++ PROGRAMMING"<<endl;
		filestream.close();
	}
	else
	{
		cout<<"FILE OPENING IS FAIL"<<endl;
	}
	return 0;
}
