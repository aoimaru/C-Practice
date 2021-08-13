#include <iostream>
#include <vector>
#include <set>

using namespace std;

int main(void) {
	vector<int> x = {0, 1, 2, 3, 4};
	// itは配列の先頭要素, つまりポインタ
	auto it = x.begin();
	cout << *it << endl;
	++it;
	cout << *it << endl;

	cout << *(it+1) << endl;

	cout << "Hello" << endl;

	for (auto it=x.begin(); it != x.end(); it++) {
		cout << *it << endl;
	}
	cout << "Hello2" << endl;

	// イテレータはコンテナの種類に依存しないため, setでも動作する
	set<int> y = {4, 3, 2, 1, 0};

	for (auto it=y.begin(); it != y.end(); it++) {
		cout << *it << endl;
	}

	// 出力は 0, 1, 2, 3, 4の順になる.なぜならset型だから

	cout << "Hello3" << endl;

	vector<int> z = {4, 3, 2, 1, 0};
	for (auto it=z.begin(); it != z.end(); it++) {
		cout << *it << endl;
	}






	return 0;
}