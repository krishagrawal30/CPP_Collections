#include <iostream>
#include <string>

using namespace std;

void printAllSubstrings(const string &str, int k) {
    int n = str.length();

    if (k > n) {
        cout << "k is larger than the length of the string!" << endl;
        return;
    }

    for (int i = 0; i <= n - k; i++) {
        cout << str.substr(i, k) << endl;
    }
}

int main() {
    string str = "krishagrawal";
    int k = 4;  // Substring size

    // Print all substrings of size k
    printAllSubstrings(str, k);
    int a = 3%5;
    cout<<a<<endl;

    return 0;
}