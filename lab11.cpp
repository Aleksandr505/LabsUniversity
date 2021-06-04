#include <cstdio>
#include<iostream>
#include <cmath>
using namespace std;

class FatherCNum {
public:
	double Re;
	double Im;
};

class CNum : public FatherCNum {
public:
	CNum operator+(CNum y) {
		CNum z;
		z.Re = Re + y.Re;
		z.Im = Im + y.Im;
		return z;
	}

	CNum operator+(double y) {
		CNum z;
		z.Re = Re + y;
		return z;
	}

	CNum operator-(CNum y) {
		CNum z;
		z.Re = Re - y.Re;
		z.Im = Im - y.Im;
		return z;
	}

	CNum operator-(double y) {
		CNum z;
		z.Re = Re - y;
		return z;
	}

	CNum operator*(CNum y) {
		CNum z;
		z.Re = Re * y.Re;
		z.Im = Im * y.Im;
		return z;
	}

	CNum operator*(double y) {
		CNum z;
		z.Re = Re * y;
		return z;
	}

	CNum operator/(CNum y) {
		CNum z;
		z.Re = Re / y.Re;
		z.Im = Im / y.Im;
		return z;
	}

	CNum operator/(double y) {
		CNum z;
		z.Re = Re / y;
		return z;
	}

	void operator!() {
		Im *= -1;
	}
};

void trigView(CNum& z) {
	double phi = atan2(z.Im, z.Re);
	double r = sqrt(z.Re * z.Re + z.Im * z.Im);
	cout << "Z = " << r << "*(cos(" << phi << ") + i*sin(" << phi << "))" << endl;
	double testRe = r * cos(phi);
	double testIm = r * sin(phi);
	cout << "test = " << testRe << " + i*" << testIm << endl;
}

int main() {
	CNum z, x, y;
	x.Re = 5;
	x.Im = 9;
	y.Re = 2;
	y.Im = 3;

	z = x + y;
	z = x - y;
	z = x * y;
	z = x / y;

	z = x + 5;
	z = x - 5;
	z = y * 5;
	z = y / 5;
	!z;
	trigView(z);

	return 0;
}
