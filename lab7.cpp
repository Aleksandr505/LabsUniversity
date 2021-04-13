#include <iostream>
#include <cmath>

using namespace std;

class SinusSpecialClassForMySpecialProgramWithoutSpringImplements {

private:

    int x;

public:

	static int n;

	void setX(int x) {
		this->x = x;
	}

	// для теста
	int getX() {
		return x;
	}

	double CalculatingSinusInsightClass();
};

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

int SinusSpecialClassForMySpecialProgramWithoutSpringImplements::n;
int main() {

	setlocale(LC_ALL, "Rus");
	SinusSpecialClassForMySpecialProgramWithoutSpringImplements sinObj;
	SinusSpecialClassForMySpecialProgramWithoutSpringImplements::n = 4;

	cout << "Введите целочисленный аргумент " << endl;
	sinObj.setX(safeInput());

	cout << "sin(x) = " << sinObj.CalculatingSinusInsightClass() << "\n" << endl;


	return 0;
}

double SinusSpecialClassForMySpecialProgramWithoutSpringImplements::CalculatingSinusInsightClass() {
	double sumSin = 0;
	for (int i = 0; i <= n; i++) {
		sumSin += (double) binpow(-1, i) * binpow(x, 2 * i + 1) / factorial(2 * i + 1);
		cout << "числа внутри метода: x=" << x << ", n=" << n << ", sumSin=" << sumSin << "\n" << endl;
	}

	return sumSin;
}
