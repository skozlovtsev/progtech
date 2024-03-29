#include <iostream>
#include <ctime>
#include <algorithm>

using namespace std;

void ex_num8_dynamic(int* arr, int size) {
	srand(time(NULL));
	for (int i = 0; i < size; i++) {
		arr[i] = rand() % 100;
	};	
};

struct Pivot
{
	unsigned int iter;
	int value;
};

void swap(int* a, int* b){
	int t = *a;
	*a = *b;
	*b = t;
};

int* psort(int* arr, unsigned int start, unsigned int end){
		int* array;
		array = new int[end - start];
		copy(arr+start, arr+end, array);
		return array;
	};

int* merge(int* arr_a, unsigned int len_a, int* arr_b, unsigned int len_b){
	int* array;
	int miter = 0;
	int new_len = len_a + len_b;
	array = new int[new_len];
	for (int i = 0; i < len_a; i++){
		array[miter] = arr_a[i];
		miter++;
	};
	for (int i = 0; i < len_b; i++){
		array[miter] = arr_b[i];
		miter++;
	};
	return array;
};

int* merge(int* arr, unsigned int len, int b){
	int* array;
	int miter = 0;
	int new_len = len + 1;
	array = new int[new_len];
	for (int i = 0; i < len; i++){
		array[miter] = arr[i];
		miter++;
	};
	array[miter] = b;
	return array;
};

int* sort(int* array, unsigned int len){
		Pivot pivot = {len-1, array[len-1]};
		unsigned int it = 0;
		int* a;
		int* b;
		while (true){
			if (array[it] > array[pivot.iter - 1])
			{
				swap(array[pivot.iter], array[pivot.iter - 1]);
				swap(array[pivot.iter], array[it]);
				pivot.iter--;
			};
			if (array[pivot.iter] > array[pivot.iter - 1])
			{
				it++;
				pivot.iter--;
			};
			if (it == pivot.iter)
			{
				break;
			};
		};
		if (pivot.iter > 1){
			a = sort(psort(array, 0, pivot.iter-1), pivot.iter - 0);
			b = sort(psort(array, pivot.iter+1, len), len - pivot.iter);
		};
		merge(merge(a, pivot.iter - 0, pivot.value), pivot.iter + 1, b, len - pivot.iter);
		return array;
	};

//7.6.9
class My2dArray {
public:
	int** arr;

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
				if (min > arr[i][j])
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
		srand(time(NULL));
		for (int i = 0; i < h; i++) {
			for (int j = 0; j < w; j++) {
				arr[i][j] = rand() % ((max + 1) - min) + min;
			};
		};
	};
	
private:
	int h;
	int w;
};

int main() {
	int n = 9;
	int ar[n] = {};
	ex_num8_dynamic(ar, n);
	for (int i = 0; i < n; i++) {
		cout << ar[i] << " ";
	};
	int* arr;
	arr = sort(ar, n);
	for (int i = 0; i < n; i++) {
		cout << arr[i] << " ";
	};
	cout << endl;
	My2dArray marr(3, 2);
	marr.fill_random(30, 60);
	marr.visualise();
	return 0;
}
