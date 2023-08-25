#include <iostream>

using namespace std;

class Base {
protected:
    double a;
    double b;
    double h;
public:
    Base(double _a, double _b, double _h) : a{_a}, b{_b}, h{_h}{}
    virtual double area() = 0;
};

class Rectangle : public Base {
public:
    Rectangle(double _a, double _b) : Base(_a,_b,0){}
    double area() {
        double s;
        s = a * b;
        return s;
    }
};

class Circle : public Base {
public:
    Circle(double _a) : Base(_a,0,0){}
    double area() {
        double s;
        s = a * a * 3.14;
        return s;
    }
};

class Triangle : public Base {
public:
    Triangle(double _a, double _b) : Base(_a, _b, 0) {}
    double area() {
        double s;
        s = a * b / 2;
        return s;
    }
};

class Trapezoid : public Base {
public:
    Trapezoid(double _a, double _b, double _h) : Base(_a, _b, _h) {}
    double area() {
        double s;
        s = (a + b) / 2 * h;
        return s;
    }
};

void show(Rectangle& r1, Circle& c1, Triangle& t1, Trapezoid& tr1) {
    cout << "Площадь прямоугольника: " << r1.area() << endl
        << "Площадь круга: " << c1.area() << endl
        << "Площадь треугольника: " << t1.area() << endl
        << "Площадь трапеции: " << tr1.area() << endl;
}

int main()
{
    setlocale(LC_ALL, "ru");
    Rectangle r1(13,11);
    Circle c1(40);
    Triangle t1(21, 2);
    Trapezoid tr1(2, 3, 6);
    show(r1, c1, t1, tr1);
    
}