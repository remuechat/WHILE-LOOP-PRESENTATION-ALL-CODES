#include <iostream>
using namespace std;

int main() {
    int n, 
        factorial_value = 1,
        counter = 0;

    cout << "N! calculator, input N: ";
    cin >> n;

    while (n > counter) {
        factorial_value = factorial_value * 
                          (n - counter);
        counter++;
    }

    cout << "The value of " << n
         << "! is equal to " << factorial_value;

    return 0;
}