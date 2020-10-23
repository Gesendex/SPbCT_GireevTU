#define _CRT_SECURE_NO_WARNINGS
#define _CRT_SECURE_NO_WARNINGS_GLOBALS
#include <iostream>
#include <math.h>
#include <iomanip>
#include <cstring>
#include <string.h>

using namespace std;

class Point
{
public:
	Point(double _x = 0, double _y = 0) : x(_x), y(_y) {}

	void Show() const
	{
		cout << " (" << x << "," << y << ")";
	}
	double x, y;
};

class Triangle
{
	Point p1, p2, p3;
	double a, b, c; //p1,p2; p2,p3; p3;p1
public:
	Triangle(Point p1, Point p2, Point p3) : p1(p1), p2(p2), p3(p3)
	{
		a = sqrt((p1.x - p2.x) * (p1.x - p2.x) + (p1.y - p2.y) * (p1.y - p2.y));
		b = sqrt((p2.x - p3.x) * (p2.x - p3.x) + (p2.y - p3.y) * (p2.y - p3.y));
		c = sqrt((p3.x - p1.x) * (p3.x - p1.x) + (p3.y - p1.y) * (p3.y - p1.y));
	}

	double Get_a()
	{
		return a;
	}

	double Get_b()
	{
		return b;
	}

	double Get_c()
	{
		return c;
	}
};

int main()
{
	setlocale(LC_ALL, "rus");
	cout << "Точки по которым будет создан треугольник:" << endl;
	Point p1(0, 0);
	cout << "p1 = ";
	p1.Show();
	cout << endl;
	Point p2(10, 0);
	cout << "p2 = ";
	p2.Show();
	cout << endl;
	Point p3(0, 10);
	cout << "p3 = ";
	p3.Show();
	cout << endl;

	Triangle tr(p1, p2, p3);
	cout << "Создание треугольника по точкам р1, р2, р3" << endl;

	cout << "Стороны этого треугольника:" << endl;
	cout << "a = " << tr.Get_a() << endl;
	cout << "b = " << tr.Get_b() << endl;
	cout << "c = " << tr.Get_c() << endl;
}


