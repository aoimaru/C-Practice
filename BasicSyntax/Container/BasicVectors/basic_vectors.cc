#include <iostream>
#include <vector>

using namespace std;


int main(void) {
	vector<int> x = {0, 1, 2, 3, 4};
	auto size = x.size();
	// 末尾へ要素の追加
	x.emplace_back(5);
	auto eb_size = x.size();
	cout << "eb_size: " << eb_size << endl;

	// 末尾から要素の削除
	x.pop_back();
	auto pb_size = x.size();
	cout << "pb_size: " << pb_size << endl;
	return 0;
}