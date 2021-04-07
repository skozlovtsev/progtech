#include <iostream>
#include <ctime>

using namespace std;

void ex_num8_dynamic(int* arr, int size) {
	srand(time(nullptr));
	for (int i = 0; i < size; i++) {
		arr[i] = rand() % 100;
	};
};


int main() {
	int ar[3] = {};
	ex_num8_dynamic(ar, 3);
	for (int i = 0; i < 3; i++) {
		cout << ar[i] << " ";
	};
	return 0;
}
