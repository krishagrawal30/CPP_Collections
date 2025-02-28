//PRATEEK RANJAN        B-48

// mob + DaTE  = 766693619024
// mid no : 36
// 36^2 = 1276
//1276 % 29 = 20

// 20. Two stacks STACK1 and STACK2 is to be implemented using single array. STACK1 and
// STACK2 are arranged alternately starting from index 0 (zero), write a common push ()
// function that will insert odd elements in STACK1 and even elements in STACK2 and common
// pop () function which can delete values from any of the stack.
#include<iostream>
using namespace std;

int even[100];
int odd[100];
int i = 0, j = 0;

void push(int a)
{
    if (a % 2 == 0)
    {
        even[i] = a;
        i++;
        cout << a << " is added to even stack." << endl;
    }
    else
    {
        odd[j] = a;
        j++;
        cout << a << " is added to odd stack." << endl;
    }
}

void pop(int k)
{
    if (k == 0)
    {
        if (j == 0)
        {
            cout << "Odd stack is empty." << endl;
        }
        else
        {
            j--;
            cout << odd[j] << " is deleted from odd stack." << endl;
        }
    }
    else if (k == 1)
    {
        if (i == 0)
        {
            cout << "Even stack is empty." << endl;
        }
        else
        {
            i--;
            cout << even[i] << " is deleted from even stack." << endl;
        }
    }
    else
    {
        cout << "Invalid Input" << endl;
    }
}

void printStack()
{
    cout << "Even Stack: ";
    if (i == 0)
    {
        cout << "Stack is empty." << endl;
    }
    else
    {
        for (int k = 0; k < i; k++)
        {
            cout << even[k] << " ";
        }
        cout << endl;
    }

    cout << "Odd Stack: ";
    if (j == 0)
    {
        cout << "Stack is empty." << endl;
    }
    else
    {
        for (int k = 0; k < j; k++)
        {
            cout << odd[k] << " ";
        }
        cout << endl;
    }
}

int main()
{
    cout << "1. Push" << endl;
    cout << "2. Pop" << endl;
    cout << "3. Exit" << endl;

    while (true)
    {
        int choice;
        cout << "Enter choice: ";
        cin >> choice;

        switch (choice)
        {
            case 1:
            {
                int a;
                cout << "Enter element to push: ";
                cin >> a;
                push(a);
                printStack();
                break;
            }
            case 2:
            {
                int k;
                cout << "Enter 1 to pop even and 0 to pop odd stack: ";
                cin >> k;
                pop(k);
                printStack();
                break;
            }
            case 3:
            {
                cout << "Exiting..." << endl;
                return 0;
            }
            default:
            {
                cout << "Invalid input" << endl;
                printStack();
                break;
            }
        }
    }
    return 0;
}
