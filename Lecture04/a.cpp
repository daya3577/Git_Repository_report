#include <iostream>
#include <conio.h>

using namespace std;

int main() {
	while (true) {
		cout << "*";

		if (_kbhit()) {
			if (_getch() == 27)
				break;
		}
	}

	return 0;
}
