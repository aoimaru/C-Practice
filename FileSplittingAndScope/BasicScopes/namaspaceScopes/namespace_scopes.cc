#include <iostream>

using namespace std;

namespace A {
	int count = 2;
}

namespace B {
	int count = 4;
}

int main(void) {
	cout << A::count << endl;
	cout << B::count << endl;
	return 0;
}