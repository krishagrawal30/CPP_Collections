#include<iostream>
using namespace std;

int push(int a, int arr[], int i) 
{
    arr[i] = a;
    i++;
    cout << a << " is added" << endl;
    return i;
}

int pop(int arr[], int i) 
{
    if(i > 0)
    {
        i--;
        cout << arr[i] << " is deleted" << endl;
        arr[i] = 0;
    }
    else
    {
        cout << "Stack Underflow" << endl;
    }
    return i;
}

void printStack(int arr[], int i)
{
    if(i == 0)
    {
        cout << "Stack is empty" << endl;
    }
    else
    {
        cout << "Stack elements: ";
        for(int j = 0; j < i; j++)
        {
            cout << arr[j] << " ";
        }
        cout << endl;
    }
}

int main() 
{
    int arr[100];
    int i = 0;
    int tos = -1;

    cout << "1. Push" << endl;
    cout << "2. Pop" << endl;
    cout << "3. Peek" << endl;
    cout << "4. Print Stack" << endl;
    while(true)
    {
        int choice;
        cout << "Enter choice: ";
        cin >> choice;

        switch(choice)
        {
            case 1:
            {
                int a;
                cout << "Enter element to push: ";
                cin >> a;
                i = push(a, arr, i); 
                tos = arr[i-1];
            }
            break;

            case 2:
                i = pop(arr, i);
                if(i > 0) tos = arr[i-1];
                else tos = -1;
            break;

            case 3:
                if(i > 0) cout << "Top element: " << arr[i-1] << endl;
                else cout << "Stack is empty" << endl;
            break;

            case 4:
                printStack(arr, i);
            break;
            
            default:
                cout << "Invalid choice" << endl;
            break;
        }
        printStack(arr, i);
    }
}

