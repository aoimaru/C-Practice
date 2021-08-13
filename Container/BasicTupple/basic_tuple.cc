#include <iostream>
#include <tuple>
#include <string>

using namespace std;

void ties() {
	//  tieを使用
	tuple<string, int, string> person {"Aoi", 22, "Siga"};
	// タプルの要素を変数に一気に代入
	string name;
	int age;
	string prefecture;
	// stringにはAoi, ageには22, prefectureにはsigaが代入される
	tie(name, age, prefecture) = person;
	// 検証
	cout << "name: " << name << endl;
	cout << "age: " << age << endl;
	cout << "prefecture: " << prefecture << endl; 

}

int main(void) {
	tuple<string, int, string> person {"Aoi", 22, "Siga"};
	auto name = get<0>(person);
	auto age = get<1>(person);

	cout << name << ":" << age << endl;

	ties();

	return 0;
}