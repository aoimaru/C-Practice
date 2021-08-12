#include <iostream>

using namespace std;


int Add(int x, int y) {
	return x+y;
}


int main(void) {
	int (*fp)(int, int) = Add;
	// int result = fp(3, 5);
	auto result = fp(3, 5);
	cout << "*fp: " << *fp << endl;
	cout << "fp: " << fp << endl;
	cout << result << endl;
	return 0;
}