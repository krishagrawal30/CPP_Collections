#include<iostream>
using namespace std;
int main()
{
	int i=0;
	while(i<=10)
	{
		i++;
		int j=1;
		while(j<=10)
		{
			cout<<i*j<<"\t";
			j++;
		}
		cout<<"\n";
	}
	return 0;
}
