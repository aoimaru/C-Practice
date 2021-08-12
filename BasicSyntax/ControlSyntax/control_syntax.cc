#include <iostream>


void basic_if(int n) {
	if (n == 5) {
		std::cout << "OK\n";
	} else if (n == 10) {
		std::cout << "SAFE\n";
	} else {
		std::cout << "NG\n";
	}

}

void basic_switch(int n) {
	switch (n) {
		case 5:
			std::cout << "OK\n";
			break;
		case 10:
			std::cout << "SAFE\n";
			break;
		default:
			std::cout << "NG\n";
	}
}


int main() {
	// basic_if(11);
	basic_switch(5);
	return 0;
}