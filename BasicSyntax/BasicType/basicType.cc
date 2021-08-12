#include <iostream>

void basic_enum(){
	enum Day {
		Sun, 
		Mon,
		Tue,
		Wed,
		Thu,
		Fri,
		Sat
	};

	enum Day c0, c1, c2;
	c0 = Sun;
	c1 = Mon;
	c2 = Tue;

	std::cout << "SUN" << ":" << c0 << "\n";
	std::cout << "MON" << ":" << c1 << "\n";
	std::cout << "TUE" << ":" << c2 << "\n";
}


int main(){
	basic_enum();
	return 0;
}