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


class My2dArray {
public:
	int** arr;

	My2dArray(int hi, int wi);
	My2dArray(int hi, int wi) {
		h = hi;
	    w = wi;
		arr = new int* [h];
		for (int i = 0; i < h; i++) {
			arr[i] = new int[w];
		};
	};

	int get_h() {
		return h;
	};

	int get_w() {
		return w;
	};

	void fill_random(int min, int max) {
		srand(time(nullptr));
		for (int i = 0; i < h; i++) {
			for (int j = 0; j < w; j++) {
				arr[i][j] = rand() % max;
			};
		};
	};
private:
	int h;
	int w;
};
