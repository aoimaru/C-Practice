#include <iostream>

// ヒープ メモリを動的に確保する.
// つまりコンパイル時にメモリを(静的に)確保するのではなく
// 実行時にメモリ領域を確保する


int main(void) {
	int* p1 = new int(100);
	int* p2 = new int[5];

	// メモリ領域をdeleteしないと メモリが解放されない -> メモリリーク
	delete p1;
	delete[] p2;


	return 0;
}