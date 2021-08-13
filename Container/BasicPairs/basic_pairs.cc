#include <iostream>
#include <utility>

using namespace std;

int main(void) {
	pair<string, int> person {"Aoi", 22};
	// 要素の参照
	// タプルと同じ方法での参照
	auto tuple_name = get<0>(person);
	auto tuple_age = get<1>(person);

	// pairでの参照方法
	auto pair_name = person.first;
	auto pair_age = person.second;

	cout << "name: " << pair_name << endl;
	cout << "age: " << pair_age << endl;
	return 0;

}