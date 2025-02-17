#include <iostream>
using namespace std;

int main() {

	int x = 0;
	int sum = 0;

	while (x <= 9) {
		sum = (2 * x + 1) + sum;
		cout << sum << endl;
		x++;
	}

	cout << sum;

	return 0;
}