#include <iostream>
#include <array>

using namespace std;

int main(void) {
	array<int, 5> x = {{0, 1, 2, 3, 4}};
	auto size = x.size();
	cout << size << endl;

	for (int i=0; i < size; i++) {
		cout << x[i] << endl;
	}
	
	return 0;
}