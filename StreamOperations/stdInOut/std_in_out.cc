#include <iostream>
// #include <vector>

using namespace std;

int main(void) {
	// vector<int> x = {0, 1, 2, 3, 4};
	int x[5] = {0, 1, 2, 3, 4};
	int* px = x;
	cout << *px << endl;
	cout << *(px+1) << endl;
	cout << px << endl;

	// こっちは標準エラー出力
	cerr << "Hello" << endl;

	return 0;
}