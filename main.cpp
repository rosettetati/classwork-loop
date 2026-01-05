#include <iostream>
using namespace std;

int main() {
    int n, m;

    // Task 1: Even numbers in interval
    cout << "Enter n and m: ";
    cin >> n >> m;

    cout << "Even numbers between " << n << " and " << m << ":" << endl;
    for (int i = n; i <= m; i++) {
        if (i > 0 && i % 2 == 0) {
            cout << i << endl;
        }
    }

    // Task 2: Sum from 1 to 100
    int sum = 0;
    for (int i = 1; i <= 100; i++) {
        sum += i;
    }
    cout << "\nSum of numbers from 1 to 100: " << sum << endl;

    // Task 3: Factorial
    int factN;
    cout << "\nEnter a number to calculate factorial: ";
    cin >> factN;

    if (factN > 20) {
        cout << "Number too large! Factorial overflows long long." << endl;
    } else {
        long long factorial = 1;
        for (int i = 1; i <= factN; i++) {
            factorial *= i;
        }
        cout << "Factorial of " << factN << " is: " << factorial << endl;
    }

    return 0;
}
