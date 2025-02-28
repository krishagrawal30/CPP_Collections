#include<iostream>
#include<vector>
using namespace std;
int main()
{
    vector<int> vect = {2,5,7,9};
    cout<<"size :"<<vect.size()<<"\t"<<"capacity :"<<vect.capacity()<<endl;
    for(int i = 0; i<vect.size();i++)
    {
        cout<<vect[i]<<" ";
    } 
    cout<<endl;
    
    vect.push_back(10);
    vect.push_back(23);
    vect.push_back(32);
    cout<<"size :"<<vect.size()<<"\t"<<"capacity :"<<vect.capacity()<<endl;
    for(int i = 0; i<vect.size();i++)
    {
        cout<<vect[i]<<" ";
    } 
    cout<<endl;
    vect.insert(vect.begin()+3, 66);
    vect.insert(vect.end()-2,33);
    cout<<"size :"<<vect.size()<<"\t"<<"capacity :"<<vect.capacity()<<endl;
    for(int i = 0; i<vect.size();i++)
    {
        cout<<vect[i]<<" ";
    } 
    cout<<endl;
    vect.insert(vect.begin())
}