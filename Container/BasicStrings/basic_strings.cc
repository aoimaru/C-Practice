#include <iostream>
#include <string>


int main(void) {
	std::string s = "Hello";
	auto size = s.size();
	for (int i=0; i < size; i++) {
		std::cout << s[i] << std::endl;
	}
	return 0;
}