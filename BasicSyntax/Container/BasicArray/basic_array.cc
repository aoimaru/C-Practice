#include <iostream>

using namespace std;

void init_array(void) {
	int x[5] = {};
	x[0] = 0;
	x[1] = 1;
	x[2] = 2;
	x[3] = 3;
	x[4] = 4;
	int y = x[2];
	cout << y << endl;
}


int main(void) {
	init_array();
	return 0;

}

