#include <iostream>


void basic_variable(int n) {
	int x;
	x = 5;
	std::cout << x << "\n";
	std::cout << n << "\n";
}

void basic_const() {
	const int x = 5;
	std::cout << x << "\n";
}




int main() {
	basic_variable(10);
	basic_const();


	return 0;
}