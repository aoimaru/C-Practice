#include <iostream>

int main() {
	int x = 5;
	int* p = &x;

	std::cout << "x:" << x << "\n";
	std::cout << "p:" << p << "\n";
	std::cout << "*p:" << *p << "\n";
}

