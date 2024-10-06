#include<iostream>
using namespace std;

void printEven(int n) {
    // Base case: if n is 0, stop recursion
    if (n == 0) {
        return;
    }
    // Recursive case: if n is even, print it and call printEven with n-2
    if (n % 2 == 0) {
        cout << n << " ";
        printEven(n-2);
    }
    // Recursive case: if n is odd, call printEven with n-1
    else {
        printEven(n-1);
    }
}

int main() {
    int n;
    cout << "Enter a positive integer: ";
    cin >> n;
    cout << "Even numbers from " << n << " to 0: ";
    printEven(n);
    cout << endl;
    return 0;
}