#include <iostream>
#include <map>

using namespace std;

int main(void) {
	// C++ではMap, Pythonでいう辞書のようなもの
	map<string, int> persons = {
		{"Aoi", 22},
		{"Taro", 23}
	};

	cout << persons["Aoi"] << endl;
	cout << persons["Taro"] << endl;

	// 要素追加
	persons.insert({"Sato", 24});

	// 要素削除
	persons.erase("Taro");

	cout << persons["Sato"] << endl;

	return 0;
}