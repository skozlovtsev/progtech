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

//7.6.9
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
	
	void visualise(){
	        for (int i = 0; i < h; i++){
		        for (int j = 0; j < h; j++){
		                cout << arr[i][j] << " ";
		        };
		cout << endl;	
		};
	};
	
	int get_max()
	{
		int max = -2147483647;
		 for (int i = 0; i < h; i++){
		        for (int j = 0; j < h; j++){
				if (max < arr[i][j])
				{
					max = arr[i][j];
				};
		        };	
		};
		return max;
	};
	
	int get_min()
	{
		int min = 2147483647;
		 for (int i = 0; i < h; i++){
		        for (int j = 0; j < h; j++){
				if (max > arr[i][j])
				{
					min = arr[i][j];
				};
		        };	
		};
		return min;
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
				arr[i][j] = min + rand() % (max + 1);
			};
		};
	};
private:
	int h;
	int w;
};
