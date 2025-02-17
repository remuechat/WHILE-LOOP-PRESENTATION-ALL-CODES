
#include <iostream>
#include <cstdlib>
#include <stdlib.h>
#include <conio.h>
#include <ctime>
using namespace std;

int main() {
	int n1, n2, n3, n4, n5,
		n6, n7, n8, n9;

	srand(time(0));

	while (true) {
		cout << endl;

		 n1 = rand() % 10;
		 n2 = rand() % 10;
		 n3 = rand() % 10;
		 n4 = rand() % 10;
		 n5 = rand() % 10;
		 n6 = rand() % 10;
		 n7 = rand() % 10;
		 n8 = rand() % 10;
		 n9 = rand() % 10;

		cout << "The generated PH Number is +639"
			 << n1 << n2 << n3 << n4 << n5
			 << n6 << n7 << n8 << n9 
			 << endl;

		cout << "Press <Enter> to generate another number: ";
		int continueIsTrue = _getch();
		int ASCII_ENTER = 13;

		if (continueIsTrue == ASCII_ENTER) {
			system("cls");
			true;
		} else {
			false;
		}
	}
	return 0;
}
