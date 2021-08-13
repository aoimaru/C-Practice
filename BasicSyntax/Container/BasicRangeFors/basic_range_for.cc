#include <iostream>
#include <vector>

using namespace std;

int main(void) {
	vector<int> x = {0, 1, 2, 3, 4};
	// 先ずは普通のFor文
	for (auto it=x.begin(); it != x.end(); it++) {
		cout << *it << endl;
	}

	cout << "=================" << endl;

	// 範囲For
	for (auto&&e : x) {
		cout << e << endl;
	}

	cout << "=================" << endl;

	// 配列でもOK

	int y[] = {4, 3, 2, 1, 0};
	for (auto&&e : y) {
		cout << e << endl;
	}
 
	return 0;
}