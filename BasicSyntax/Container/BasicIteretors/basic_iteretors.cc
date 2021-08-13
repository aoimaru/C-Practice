#include <iostream>
#include <vector>

using namespace std;

int main(void) {
	vector<int> x = {0, 1, 2, 3, 4};
	// itは配列の先頭要素, つまりポインタ
	auto it = x.begin();
	cout << *it << endl;
	++it;
	cout << *it << endl;

	cout << *(it+1) << endl;
	return 0;
}