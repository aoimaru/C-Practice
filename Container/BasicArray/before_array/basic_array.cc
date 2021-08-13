#include <iostream>

using namespace std;


// 関数に配列を渡す場合は, 配列の先頭要素へのポインタと要素数をセットで渡す必要がある
void printArray(const int* x, size_t num) {
	for (size_t i=0; i < num; i++) {
		cout << x[i] << endl;
	}
}


// void printArray1(const int x[5]) {
// 	static_assert(sizeof(x) == sizeof(int*), "OK");
// 	for (int i=0; i < 5; i++) {
// 		cout << x[i] << endl;
// 	}

// }

void printArray2(const int* x) {
	for (int i=0; i < 5; i++) {
		cout << x[i] << endl;
	}

}



void dist_func_to_array(void) {
	constexpr size_t num = 5;
	int x[5] = {0, 1, 2, 3, 4};
	// printArray1(x);
	// printArray2(x);
	printArray(x, num);
	
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
	// array_and_pointer();
	dist_func_to_array();
	return 0;

}

