#include<iostream>
#include<time.h>
#include<fstream>
#include<string>
using namespace std;
int main()
{
    cout<<"Welcome to the 7-Up & 7-Down Game"<<endl;
    string rules;
    ifstream myfile("rules of the game.txt");
    while(getline(myfile,rules))
    {
        cout<<rules<<endl;
    }
    myfile.close();
    srand(time(0));
    label:
    char choice,replay;
    int b, points = 0;
    cout<<"Let's begin the game."<<endl;
    for(int i = 0 ; i < 5 ; i++)
    {
        cout<<"This is round-"<<i+1<<endl;
        cout<<"\n Enter your choice here : ";
        cin>>choice;
        int d1,d2;
        d1 = (rand()%6+1);
        cout<<"After Rolling the first Dice we got : "<<d1<<endl;
        d2 = (rand()%6+1);
        cout<<"After Rolling the second Dice we got : "<<d2<<endl;
        b = d1+d2;
        cout<<"The dices sums up to : "<<b<<endl;
        switch(choice)
        {
            case 'U':
            {
                if(b<7) 
                {
                    points = points + 10;
                    cout<<"YES!!! that's a 7 Up....."<<endl;
                } 
                else if(b>7)
                {
                    cout<<"NO!!! that's a 7 Down....."<<endl;
                }
                else 
                {
                    cout<<"NO!!! that's a 7....."<<endl;
                }
                break;
            }
            case 'u':
            {
                if(b<7) 
                {
                    points = points + 10;
                    cout<<"YES!!! that's a 7 Up....."<<endl;
                } 
                else if(b>7)
                {
                    cout<<"NO!!! that's a 7 Down....."<<endl;
                }
                else 
                {
                    cout<<"NO!!! that's a 7....."<<endl;
                }
                break;
            }
            case 'D':
            {
                if(b<7) 
                {
                    cout<<"NO!!! that's a 7 Up....."<<endl;
                } 
                else if(b>7)
                {
                    cout<<"YES!!! that's a 7 Down....."<<endl;
                    points = points + 10;
                }
                else 
                {
                    cout<<"NO!!! that's a 7....."<<endl;
                }
                break;
            }
            case 'd':
            {
                if(b<7) 
                {
                    cout<<"NO!!! that's a 7 Up....."<<endl;
                } 
                else if(b>7)
                {
                    cout<<"YES!!! that's a 7 Down....."<<endl;
                    points = points + 10;
                }
                else 
                {
                    cout<<"NO!!! that's a 7....."<<endl;
                }
                break;
            }
            case '7':
            {
                if(b<7) 
                {
                    cout<<"NO!!! that's a 7 Up....."<<endl;
                } 
                else if(b>7)
                {
                    cout<<"NO!!! that's a 7 Down....."<<endl;
                }
                else 
                {
                    cout<<"YES!!! that's a 7....."<<endl;
                    points = points + 20;
                }
                break;
            }
            default:
            {
                cout<<"Invalid input!!! You have missed this round. "<<endl;
                break;
            }
        }
        cout<<endl;
    }
    cout<<"Total points : "<<points<<endl;
    if(points>=30)
    {
        cout<<"Congradulations!!! You have won the game."<<endl;
    }
    else
    {
        cout<<"Better Luck next Time."<<endl;
    }
    cout<<"\n Press y to play again or press any other character to exit : ";
    cin>>replay;
    if(replay=='y'||replay=='Y')
    {
        cout<<"You are again welcome to this game.";
        goto label;
    }
    else{
        cout<<"Thank You for playing this game, we hope that you like our game.";
    }
    return 0;
}