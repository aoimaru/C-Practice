#include <iostream>


using namespace std;

// deepコピーはPythonでの値渡し?みたいな?
// shallowコピーはPyhtonでの参照渡し?みたいな?

void deep(void) {
	int x = 100;
	// xをyへdeepコピー
	int y = x;
	y = 50;
	cout << "x: " << x << endl;
	cout << "y: " << y << endl; 
}


void shallow(void) {
	int* x = new int(100);
	int* y = x;
	*y = 50;

	// xの値も50に更新される, ポインタの指す向きが同じになるため
	cout << "y: " << *x << endl;

	delete x;

}

void ChangeToFifty1(int v);
void ChangeToFifty2(int* v);

void test(void) {
	int a = 100;
	ChangeToFifty1(a);
	cout << "depp: " << a << endl;

	int b = 100;
	ChangeToFifty2(&b);
	cout << "shallow: " << b << endl;
}

int main(void) {
	deep();
	shallow();
	test();
	return 0;
}


void ChangeToFifty1(int v) {
	v = 50;
}

void ChangeToFifty2(int* v) {
	*v = 50;
}







