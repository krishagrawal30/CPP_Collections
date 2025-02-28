#include<iostream>
#include<cstring>
using namespace std;
int main()
{
	string str1="This is C language";
	string str2="C++";
	cout<<"Before replacement, string is: "<<str1<<endl;
	str1.replace(8,1,str2);
	cout<<"After replacement string is : "<<str1<<endl;
	return 0;
}
