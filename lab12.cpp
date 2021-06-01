#include <cstdio>
#include<iostream>
#include <cmath>
using namespace std;

template <class T> void swap(T *t, int i, int j) {
	T a = t[i];
	t[i] = t[j];
	t[j] = a;
}

int main() {
	const int N = 7;
	char c[N] = { 'a', 'b', 'c', 'd', 'e', 'f', 'g' };
	int n[N] = { 1,2,3,4,5,6,7 };

	swap(c, 0, 2);
	swap(n, 0, 4);

	for (int i = 0; i < N; i++) {
		printf("%c ", c[i]);
	}
	cout << endl;
	for (int i = 0; i < N; i++) {
		printf("%d ", n[i]);
	}


	return 0;
}
