#include <iostream>

using namespace std;

int main() {
	int previous = 1,
		current = 1,
		next = 1, 
		counter = 3,
	    nth_term;

	cout << "What nth term will you be using from Fibonnaci sequence?";
	cin >> nth_term;

	while (counter <= nth_term) {
		next = previous + current;
		previous = current;
		current = next;
		counter++;
	}

	cout << "The value of " << nth_term << "th term is " << next;

	return 0;
}