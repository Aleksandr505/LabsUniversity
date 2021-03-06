#include <iostream>
#include <cmath>

using namespace std;

#define PI 3.14159265

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

int main()
{
	setlocale(LC_ALL, "Rus");

	cout << "Введите координаты первого вектора:" << endl;
	int x1 = safeInput();
	int y1 = safeInput();
	int z1 = safeInput();

	cout << "Введите координаты второго вектора:" << endl;
	int x2 = safeInput();
	int y2 = safeInput();
	int z2 = safeInput();

	// находим косинус
	double res = (x1 * x2 + y1 * y2 + z1 * z2) / (sqrt(x1*x1 + y1*y1 + z1*z1) * sqrt(x2*x2 + y2*y2 + z2*z2));

	// находим угол между двумя векторами
	res = acos(res) * 180 / PI;

	cout << "Угол равен = " << res << " градусам" << endl;


	return 0;
}
