#include <iostream>

using namespace std;

int main() {

	int START = 0,
		END = 10;

	while (START <= 10) {
		
		int isEven = START % 2;
		
		switch(isEven){
			case 0: 
				cout << "The number" << START << "is even \n";
				break;
			case 1:
				cout << "The number" << START << "is odd \n";
				break;
		}


		START++;
	}
}