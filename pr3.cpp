#include <iostream>
#include <cmath>

using namespace std;

void ex_num1(){
	int a, b;
	cin >> a;
	cin >> b;
	if (a % 2 != 0){
		cout << a << endl;
	}
	else if (b % 2 != 0){
		cout << b << endl;
	};
};


void ex_num4(){
	int a;
	cin >> a;
    if (((a >= 65) & (a <= 90)) | ((a >= 97) & (a <= 122))){ cout << "True" << endl; }
	else { cout << "False" << endl; };
};


void ex_num6() {
	setlocale(LC_ALL, "rus");
	int year;
	cin >> year;
	if ((year % 4) == 0) {
		if ((year % 100) == 0) {
			if ((year % 400) == 0) {
				cout << "Год " << year << " високосный." << endl;
			}
			else { cout << "Год " << year << " невисокосный." << endl; };
		}
		else { cout << "Год " << year << " високосный." << endl; };
	}
	else { cout << "Год " << year << " невисокосный." << endl; };
};


int ex_num10(int x) {
	if (x > 0) { return (2 * x) - 10; }
	else if (x == 0) { return 0; }
	else if (x < 0) { return (2 * abs(x)) - 1; };
};


void ex_num13() {
	setlocale(LC_ALL, "rus");
	int a, r;
	cin >> a;
	cin >> r;
	if ((r * 2) <= a) { cout << "Круг может быть вписан в квадрат" << endl; }
	else if (sqrt((pow(a, 2) / 2)) <= r) { cout << "Квадрат может быть вписан в круг" << endl; };
};


void ex_num7() {
	int a, b, c;
	float d, x1, x2;
	cin >> a;
	cin >> b;
	cin >> c;
	d = pow(b, 2) - (4 * a * c);
	if (d > 0) {
		x1 = (-b + sqrt(d)) / (a * 2);
		x2 = (-b - sqrt(d)) / (a * 2);
		cout << "x1 = " << x1 << " x2 = " << x2 << endl;
	}
	else { cout << "None" << endl; };
};


int main() {
	//ex_num1();
	//ex_num4();
	//ex_num6();
	//cout << ex_num10(-2) << endl;
	//ex_num13();
	ex_num7();
	return 0;
}
