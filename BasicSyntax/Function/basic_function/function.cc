#include <iostream>


void HelloWorld(int n) {
	for (int cnt=0; cnt < n; ++cnt) {
		std::cout << "Hello World" << std::endl;
	}
}

void Forward_Declaration(int n);


int main(void) {
	HelloWorld(5);
	Forward_Declaration(2);
	return 0;
}

void Forward_Declaration(int n) {
	using std::cout;
	using std::endl;
	if (n == 1) {
		cout << "Hello World 1" << endl;
	} else {
		cout << "Hello World 2" << endl;
	}
}