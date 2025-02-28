#include <iostream>
#include <algorithm>
using namespace std;

const int MAX_SIZE = 10000;

// Function to flatten the 2D array and sort the flattened array
void f(int arr[], int m, int n, int a[]) {
    int idx = 0;
    for (int i = 0; i < m; ++i) {
        for (int j = 0; j < n; ++j) {
            a[idx++] = arr[i * n + j];
        }
    }
    sort(a, a + idx);
}

// Function to find a subset with a given sum
bool s(int a[], int size, int t, int s[]) {
    int total = 0;
    for (int i = 0; i < size; ++i) {
        total += a[i];
    }
    if (total == t) {
        for (int i = 0; i < size; ++i) {
            s[i] = a[i];
        }
        return true;
    }
    if (total < t) {
        return false;
    }
    int curr = total, idx = 0;
    for (int i = size - 1; i >= 0; --i) {
        if (curr - a[i] >= t) {
            curr -= a[i];
        } else if (curr - a[i] == t) {
            s[idx++] = a[i];
            curr -= a[i];
            return true;
        }
    }
    return false;
}

int main() {
    while (true) {
        int m, n;
        cout << "Enter the number of rows: ";
        cin >> m;
        cout << "Enter the number of columns: ";
        cin >> n;

        int arr[m][n]; // Declare 2D array with size m x n

        cout << "Enter the elements of the 2D array:\n";
        for (int i = 0; i < m; ++i) {
            for (int j = 0; j < n; ++j) {
                cin >> arr[i][j];
            }
        }

        int flattened[m * n]; // Declare 1D array to store flattened array

        // Flatten the 2D array into the 1D array
        for (int i = 0; i < m; ++i) {
            for (int j = 0; j < n; ++j) {
                flattened[i * n + j] = arr[i][j];
            }
        }

        int a[m * n]; // Array to be used in function f
        f(flattened, m, n, a); // Call function with flattened array

        int q;
        cout << "Enter element to search: ";
        cin >> q;

        int subset[m * n] = {0};
        bool found = s(a, m * n, q, subset);
        if (found) {
            cout << "Subset with sum " << q << " found. Elements are: ";
            for (int i = 0; i < m * n; ++i) {
                if (subset[i] != 0) {
                    cout << subset[i] << " ";
                }
            }
            cout << endl;
        } else {
            int nearest = 0;
            for (int i = 0; i < m * n; ++i) {
                nearest += a[i];
            }
            cout << "No subset with sum " << q << " found. Nearest sum that can be formed is " << nearest << "." << endl;
        }

        int z;
        cout << "If you want to run this again press 1 else press 0: ";
        cin >> z;
        if (z == 0) {
            break;
        }
    }
    return 0;
}


