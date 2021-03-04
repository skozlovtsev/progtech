#include <iostream>
#include <cmath>
#include <algorithm>
#include <ctime>
#define N 10
#define M 20


using namespace std;


void ex_num1() {
	int arr[N] = { -10, 5, 8, -3, 9, 11, 24, -4, 7, 6 };
	int sum = 0;
	
	for (int i = 0; i < N; i++) {
		if ((arr[i] >= 0) && (arr[i] % 2 == 0)) {
			sum += arr[i];
		};
	};
	cout << sum << endl;
};


void ex_num3(){
    int arr[N] = { -10, 5, 8, -3, 9, 11, 24, -4, 7, 6 };
	int sum = 0;
	float med;
	
	for (int i = 0; i < N; i++){
		sum += arr[i];
	};
	med = sum / N;
	for (int i = 0; i < N; i++){
		if (arr[i] > med){
			cout << arr[i] << endl;
		};
	};	
};


void ex_num4_1(){
	int arr[N] = { -10, 5, 8, -3, 9, 11, 24, -4, 7, 6 };
	
	sort(arr, arr +N);
	cout << arr[0] << " " << arr[1] << endl;
};


void ex_num4_2(){
	int arr[N] = { -10, 5, 8, -3, 9, 11, 24, -4, 7, 6 };
	int a;
	
	for (int i = 0; i < N - 1; i++){
	  	for (int j = 0; j < N - 1; j++){
	  		if (arr[j] > arr[j + 1]){
	  		   a = arr[j];
	  		   arr[j] = arr[j + 1];
	  		   arr[j + 1] = a;
			  };
		  };
	};
	cout << arr[0] << " " << arr[1] << endl;
};


void ex_num4_3(){
	int arr[N] = { -10, 5, 8, -3, 9, 11, 24, -4, 7, 6 };
	int a;
	
	for (int i = 0; i < N; i++){
	  	for (int j = 0; j < N; j++){
	  		if (arr[j] > arr[i]){
	  		   a = arr[j];
	  		   arr[j] = arr[i];
	  		   arr[i] = a;
			  };
		  };
	};
	cout << arr[0] << " " << arr[1] << endl;
};


void ex_num5(){
	int arr[M], pop_range[2];
	int a;
	
	cin >> pop_range[0] >> pop_range[1];
	
	for (int i = 0; i < M; i++){
		arr[i] = i - 10;
	};
	
	for (int i = 0; i < M; i++){
		if ((arr[i] >= pop_range[0]) && (arr[i] <= pop_range[1])){
			arr[i] = 0;
		};
	};
	
	for (int i = 0; i < M - 1; i++){
	  	for (int j = 0; j < M - 1; j++){
	  		if ((arr[j] < arr[j + 1]) && (arr[j] == 0)){
	  		   a = arr[j];
	  		   arr[j] = arr[j + 1];
	  		   arr[j + 1] = a;
			  };
		  };
	};
	
	for (int i = 0; i < M; i++){
		cout << arr[i] << " ";
	};
};


void ex_num6(){
	const int range = 7;
	int point;
	int sum = 0;
	int arr[range] = { 5, 3, -1, 8, 0, -6, 1 };
	
	for (int i = 0; i < range; i++){
		if (arr[i] < 0){
			point = i + 1;
			break;
		};
	};
	for (int i = point; i < range; i++){
		sum += abs(arr[i]);
    };
    cout << sum << endl;
};


void ex_num7(){
	const unsigned int range = 5;
	int arr[range] = { 10, -3, -5, 2, 5 };
	unsigned int element;
	unsigned int abs_min =  4294967294;
	
	for (unsigned int i = 0; i < range; i++){
		if (abs(arr[i]) < abs_min){
			abs_min = abs(arr[i]);
			element = i + 1;
		};
	};
	cout << element << endl;
};


void ex_num10(){
	const unsigned int range_y = 5;
	const unsigned int range_x = 5;
	unsigned int max = 0;
	unsigned int sum = 0;
	unsigned int string_num;
	unsigned short int arr[range_y][range_x]; 
	
	srand(time(NULL));
	
	for (unsigned int i = 0; i < range_y; i++){
		for (unsigned int j = 0; j < range_x; j++){
			arr[i][j] = rand() % 91 + 10;
			cout << arr[i][j] << " ";
		};
		cout << endl;
	};
	
	for (unsigned int i = 0; i < range_y; i++){
		for (unsigned int j = 0; j < range_x; j++){
			sum += arr[i][j];
		};
		if (sum > max){
			max = sum;
			string_num = i + 1;
		};
		cout << sum << " ";
		sum = 0;
	};
	cout << endl;
    cout << string_num << endl;
};


int main(){
	//ex_num1();
	//ex_num3();
	//ex_num4_1();
	//ex_num4_2();
	//ex_num4_3();
	//ex_num5();
	//ex_num6();
	//ex_num7();
	ex_num10();
	return 0;
}
