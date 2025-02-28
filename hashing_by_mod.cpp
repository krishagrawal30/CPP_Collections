#include<iostream>
#include<cmath>
using namespace std;

int prime(int n)
{
    if (n <= 1) return 0;
    if (n == 2) return 1;
    if (n % 2 == 0) return 0;
    for (int i = 3; i <= sqrt(n); i += 2)
    {
        if (n % i == 0) return 0;
    }
    return 1;
}

int check(int k, int p, int hash[])
{
    int i = 0;
    while (i < p)
    {
        int index = (k + i) % p;
        if (hash[index] == 0) return index;
        i++;
    }
    return -1;
}

int main()
{
    int n, p;
    cout << "Enter size of array: ";
    cin >> n;
    int arr[n];
    cout << "Enter elements of array: ";
    for (int i = 0; i < n; i++) cin >> arr[i];

    int x = n;
    while (!prime(n))
    {
        n++;
    }
    p = n;
    cout << "Prime number is: " << p << endl;

    int hash[p] = {0};

    for (int i = 0; i < x; i++)
    {
        int k = arr[i] % p;
        int h = check(k, p, hash);
        if (h != -1) hash[h] = arr[i];
    }

    cout << "Hash Array: ";
    for (int i = 0; i < p; i++)
    {
        cout << "\t" << hash[i];
    }
    cout << endl;

    return 0;
}