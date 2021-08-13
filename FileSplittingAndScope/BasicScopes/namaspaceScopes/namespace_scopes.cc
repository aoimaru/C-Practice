#include <iostream>

using namespace std;

namespace A {
	int count = 2;
}

namespace B {
	int count = 4;
	int GetCount() {
		return count;
	}
}

// namaspaceは入れ子にできる
namespace C {
	int count = 6;
	namespace P {
		int count = 8;

		int GetCount() {
			return count;
		}
	}
}

int main(void) {
	cout << A::count << endl;
	cout << B::count << endl;
	cout << "関数スコープ: " << B::GetCount() << endl;

	cout << C::P::count << endl;
	cout << C::P::GetCount() << endl;
	return 0;
}