#include <iostream>
#include <string>
using namespace std;
bool check(string s)
{
    string fav = "1100";
    return s.find(fav)!= string::npos;
}
int main() {
    int t;
    cin >> t;
    while (t--) 
    {
        string s;
        cin>>s;
        int n,a;
        char b;
        cin>>n;
        for(int i=0 ;i<n;i++)
        {
            cin>>a>>b;
            s[a-1]=b;
            if(check(s)) 
                cout<<"YES"<<endl;
            else 
                cout<<"NO"<<endl;
        } 
    }
    return 0;
}
