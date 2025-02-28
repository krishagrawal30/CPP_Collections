#include<iostream>
#include<fstream>
using namespace std;
int main()
{
	string srg;
	ifstream filestream("krish.txt");
	if(filestream.is_open())
	{
		while(getline(filestream,srg))
		{
			cout<<srg<<endl;
		}
		filestream.close();
	}
	else
	{
		cout<<"FILE OPENING IS FAIL"<<endl;
	}
	return 0;
}
