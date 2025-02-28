#include<iostream>
#include<math.h>
using namespace std;
int tower(int n)
{
    int a = 0, b = 1;
    if (n==0) return a;
    if(n==1) return b;
    return pow(2,n-1)+tower(n-1);
}
int main()
{
    int n;
    cout<<"Enter : ";
    cin>>n;
    int a = tower(n);
    cout<<a<<endl;
    return 0;
}
