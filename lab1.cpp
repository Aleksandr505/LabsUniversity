#include <iostream>
#include <cmath>
using namespace std;


int safeInput() {
    while (true) {
        int a;
        cin >> a;

        if (cin.fail()) {
            cin.clear();
            cin.ignore(32767, '\n');
            cout << "Critical wrong input" << "\n" << endl;
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

    char errMessage1[] = "Неверно, угол должен быть >= 0 && <= 90 градусам";
    cout << "Введите угол брошенного тела относительно горизонта в градусах" << endl;
    int a = safeInput();
    while (a < 0 || a > 90) {
        cout << errMessage1 << endl;
        a = safeInput();
    }


    char errMessage2[] = "Неверно, начальная скорость должна быть >= 0";
    cout << "Введите начальную скорость тела в метрах/секунду" << endl;
    int v = safeInput();
    while (v < 0) {
        cout << errMessage2 << endl;
        v = safeInput();
    }

    double l = (v*v * sin(2*a * 3.14 / 180)) / (9.8);
    cout << "Дальность полёта тела = " << l << " метров" << endl;

    return 0;
}
