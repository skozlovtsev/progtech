#include <iostream>
#include <cmath>
#define PI 3.14

using namespace std;


void ex_num2() {
	int a, b;
	cin >> a;
	cin >> b;
	cout << sqrt(pow(a, 2) + pow(b, 2)) << endl;
};


void ex_num4() {
	int a1, b1, a2, b2, l_a, l_b;
	cin >> a1;
	cin >> b1;
	cin >> a2;
	cin >> b2;
	l_a = a2 - a1;
	l_b = b2 - b1;
	cout << "x - " << a1 << "    " << "y - " << b1 << endl << "______ - ______" << " = 0" << endl << "   " << l_a << "       " << l_b << endl;
};


void ex_num5() {
	int n, y, c;
	double m, s, k, i, p;
	cin >> n;
	cin >> y;
	cin >> p;
	p = p / 100;
	i = p / 12;
	c = y * 12;
	k = (i * pow(1 + i, c)) / (pow(1 + i, c) - 1);
	m = k * n;
	s = m * c;
	cout << m << endl << s << endl;
};


void ex_num10() {
	int r;
	cin >> r;
	cout << (4 * (PI * pow(r, 3))) / 3 << endl << 4 * (PI * pow(r, 2)) << endl;
};


int main() {
	ex_num2();
    ex_num10();
	ex_num4();
	ex_num5();
	return 0;
}