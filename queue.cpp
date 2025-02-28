#include <iostream>
using namespace std;

const int m = 10;
int q[m];
int f1 = -1, r1 = -1;
int f2 = m, r2 = m;

void enq1(int v) 
{
    if (r1 + 1 == r2) 
    {
        cout << "Queue 1 Overflow" << endl;
        return;
    }
    if (f1 == -1) f1 = 0;
    q[++r1] = v;
    cout << v << " enqueued to Queue 1" << endl;
}

void deq1() 
{
    if (f1 == -1 || f1 > r1) 
    {
        cout << "Queue 1 Underflow" << endl;
        return;
    }
    int v = q[f1++];
    if (f1 > r1) f1 = r1 = -1;
    cout << v << " dequeued from Queue 1" << endl;
}

void enq2(int v) 
{
    if (r2 - 1 == r1) 
    {
        cout << "Queue 2 Overflow" << endl;
        return;
    }
    if (f2 == m) f2 = m - 1;
    q[--r2] = v;
    cout << v << " enqueued to Queue 2" << endl;
}

void deq2()
{
    if (f2 == m || f2 < r2) 
    {
        cout << "Queue 2 Underflow" << endl;
        return;
    }
    int v = q[f2--];
    if (f2 < r2) f2 = r2 = m;
    cout << v << " dequeued from Queue 2" << endl;
}

int main() 
{
    int choice, value;
    cout << "Menu:"<<endl;
        cout << "1. Enqueue to Queue 1"<<endl;
        cout << "2. Dequeue from Queue 1"<<endl;
        cout << "3. Enqueue to Queue 2"<<endl;
        cout << "4. Dequeue from Queue 2"<<endl;
        cout << "5. Exit"<<endl;
    while (true) 
    {
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) 
        {
            case 1:
                cout << "Enter value to enqueue to Queue 1: ";
                cin >> value;
                enq1(value);
                break;
            case 2:
                deq1();
                break;
            case 3:
                cout << "Enter value to enqueue to Queue 2: ";
                cin >> value;
                enq2(value);
                break;
            case 4:
                deq2();
                break;
            case 5:
                cout << "Exiting..." << endl;
                return 0;
            default:
                cout << "Invalid choice, please try again." << endl;
        }
    }
}
