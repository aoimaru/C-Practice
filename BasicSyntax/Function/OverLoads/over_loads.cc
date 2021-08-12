#include <iostream>

using namespace std;

void Hello(void){
	cout << "Hello" << endl;
}

void Hello(int x) {
	for (int cnt=0; cnt < x; ++cnt) {
		cout << "Hello" << endl;
	}
}

int main(void) {
	Hello();
	Hello(3);
	return 0;
}