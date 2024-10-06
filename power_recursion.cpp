#include<iostream>
using namespace std;

// Function to calculate power using recursion
int power(int base, int exponent) {
    // Base case: anything to the power of 0 is 1
    if (exponent == 0)
        return 1;
    // Recursive case: multiply base by the result of the function called with exponent-1
    else
        return base * power(base, exponent - 1);
}

int main() {
    int base, exponent;
    cout << "Enter base: ";
    cin >> base;
    cout << "Enter exponent: ";
    cin >> exponent;
    cout << "Result: " << power(base, exponent) << endl;
    return 0;
}