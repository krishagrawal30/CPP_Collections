#include<iostream>
using namespace std;
int main()
{
	int test[3][3]={{05,10,15},{20,25,30},{35,40,45}};
	cout<<" ";
	for (int i=0;i<3;i++)
	{
		for (int j=0;j<3;j++)
		{
			cout<<test[i][j]<<"  ";
		} 
		cout<<endl;
	}
}

