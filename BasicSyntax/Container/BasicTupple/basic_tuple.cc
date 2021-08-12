#include <iostream>
#include <tuple>
#include <string>

using namespace std;

int main(void) {
	tuple<string, int, string> person {"Aoi", 22, "Siga"};
	auto name = get<0>(person);
	auto age = get<1>(person);

	cout << name << ":" << age << endl;

	return 0;
}