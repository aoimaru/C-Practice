#include <iostream>
using namespace std;

int main(int argc, char* argv[]) {

	for (int cnt=1; cnt < argc; ++cnt) {
		cout << "argv[" << cnt << "]:" << argv[cnt] << endl;
	}
	return 0;
}