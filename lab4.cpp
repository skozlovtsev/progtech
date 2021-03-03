#include <iostream>
#include <cmath>
#include <cstdlib>
#include <ctime>


using namespace std;
 

void ex_num1() {
	unsigned short int clientsCount, avg_age, curent_age, max_age, min_age;
	max_age = 0;
	min_age = 255;
	avg_age = 0;
	cin >> clientsCount;
	for (int i = 0; i < clientsCount; i++) {
		cin >> curent_age;
		if (curent_age > max_age) { max_age = curent_age; };
		if (curent_age < min_age) { min_age = curent_age; };
		avg_age += curent_age;
	};
	cout << "max = " << max_age << endl << "min = " << min_age << endl << "avg = " << avg_age / clientsCount << endl;
};


void ex_num4() {
	unsigned short int height;
	cin >> height;
	for (int i = 0; i < height; i++) {
		for (int j = i; j < height; j++) {
			cout << " ";
		};
		for (int j = 0; j < 1 + (i * 2); j++) {
			cout << "^";
		};
		cout << endl;
	};
};


void ex_num8() {
	setlocale(LC_ALL, "rus");
	unsigned short int rand_val, p_val;
	srand(time(nullptr));
	rand_val = rand() % 101;
	for (unsigned short int i = 0; i < 10; i++) {
		cin >> p_val;
		if (p_val == rand_val) { break; };
		if (p_val > rand_val) { cout << "Больше чем надо" << endl; };
		if (p_val < rand_val) { cout << "Меньше чем надо" << endl; };
	};
	cout << rand_val << endl;
};


void ex_num9() {
	char c;
	unsigned short int g;
	for (int i = 32; i < 127; i = i + 0) {
		g = 128 - i;
		for (unsigned short int j = 0; (j < 10) & (j < g); j++) {
			c = i;
			cout << "'" << i << "-" << c << "'" << "; ";
			i++;
		};
		cout << endl;
	};
};


int main() {
	//ex_num1();
	//ex_num4();
	//ex_num8();
	ex_num9();
	return 0;
}