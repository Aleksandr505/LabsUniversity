#include <iostream>
#include <cmath>

using namespace std;

int factorial(int i) {
	if (i == 0) {
		return 1;
	}
	else {
		return i * factorial(i - 1);
	}
}

int safeInput() {
	while (true) {
		int a;
		cin >> a;

		if (cin.fail()) {
			cin.clear();
			cin.ignore(32767, '\n');
			cout << "Please, input integer number" << "\n" << endl;
		}
		else {
			cin.ignore(32767, '\n');
			return a;
		}
	}
}

int binpow(int a, int n) {
	if (n == 0)
		return 1;
	if (n % 2 == 1)
		return binpow(a, n - 1) * a;
	else {
		int b = binpow(a, n / 2);
		return b * b;
	}
}

int main()
{
	setlocale(LC_ALL, "Rus");

	const int n = 2;

	cout << "Введите целочисленный аргумент " << endl;
	int x = safeInput();

	double sumSin = 0;
	for (int i = 0; i <= n; i++) {
		sumSin += binpow(-1, i) * binpow(x, 2 * i + 1) / factorial(2 * i + 1);
	}

	cout << "sin(x) = " << sumSin << endl;


	return 0;
}
