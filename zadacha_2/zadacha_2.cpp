#include <iostream>
#include <cmath>

using namespace std;

class Base {
protected:
	double a;
	double b;
	double c;
public:
	Base(double _a, double _b, double _c) : a{_a}, b{_b}, c{_c}{}
	virtual void korni() = 0;
};

class Line : public Base {
public:
	Line(double _a, double _b) : Base(_a,_b,0){}
	void korni() {
		double k;
		if (a != 0) {
			k = b / a;
			cout <<  k;
		}
		else if (a == 0 && b == 0) {
			cout << "Любое число";
		}
		else {
			cout << "Пустое множество";
		}
	}
};

class Kvadr : public Base {
public:
	Kvadr(double _a, double _b, double _c) : Base(_a, _b, _c) {}
	void korni() {
		double d;
		double x1, x2;
		d = (b * b) - (4 * a * c);
		if (d < 0) {
			cout << "пустое множество";
		}
		else if (d == 0) {
			x1 =  - b / (2 * a);
			cout <<  x1;
		}
		else {
			x1 = ( - b + sqrt(d)) / (2 * a);

			x2 = ( - b - sqrt(d)) / (2 * a);

			cout << x1 << " " << x2;
		}
	}
};

int main()
{
	setlocale(LC_ALL, "ru");
	Line l1(2, 5.5);
	cout << "Линейные корни: ";
	l1.korni();
	cout << endl;
	Kvadr k1(1, -70, 600);
	cout << "Квадратные корни: ";
	k1.korni();
}