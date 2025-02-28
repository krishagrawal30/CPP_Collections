#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter size of array : ";
    cin>>n;
    int arr[n];
    cout<<"Enter elements : ";
    for (int i = 0; i < n; i++)
    {
       cin>>arr[i];
    }
    int x;
    cout<<"Enter target : ";
    cin>>x;
    int l = 0, h = n-1,mid1,mid2;
    while(l<=h)
    {
        mid1= l+h/3;
        mid2 = 2*mid1;
        if(x==arr[mid1])
        {
            cout<<x<<" found at "<<mid1+1<<" position"<<endl;
            break;
        }
        else if(x==arr[mid2])
        {
            cout<<x<<" found at "<<mid2+1<<" position"<<endl;
            break;
        }
        else if(x>arr[mid1]&&x<arr[mid2])
        {
            l=mid1+1;
            h= mid2-1;
        }
        else if(x<arr[mid1])
        {
            h=mid1-1;
        }
        else if(x>arr[mid2])
        {
            l=mid2+1;
        }
    }
    if(x!=arr[mid1]||x!=arr[mid2])
    {
        cout<<"Element not found...."<<endl;
    }
}