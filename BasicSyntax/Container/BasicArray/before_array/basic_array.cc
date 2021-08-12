#include <iostream>

using namespace std;


void printArray1(const int x[5]) {

}


void dist_func_to_array(void) {
	printArray1();
	printArray2();
	
}


void array_and_pointer(void) {
	int x[] = {2, 4, 6, 8, 10};
	int *p = x;
	cout << *p << endl;
	cout << *(p+1) << endl;
	cout << *(p+2) << endl;
	cout << *(p+3) << endl;
	cout << *(p+4) << endl;

	int y = 12;
	int *q = &y;

	cout << q << endl;
	cout << *q << endl;
} 


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
	// init_array();
	array_and_pointer();
	return 0;

}

