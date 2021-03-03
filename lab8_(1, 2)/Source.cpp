#include <string>
#include <iostream>
#include <algorithm>
#define N 7


using namespace std;

struct Aeroflot
{

	string destName;
	unsigned int flightNum;
	string planeType;

	void output() {
		cout << destName << " " << flightNum << endl;
	};

	static bool compOnName(Aeroflot a, Aeroflot b) {
		return a.destName < b.destName;
	}

};


bool aeroflot_sorter() {

}


int main() {
	Aeroflot planes[N];
	string type;
	for (unsigned int i = 0; i < N; i++) {
		cin >> planes[i].destName;
		cin >> planes[i].flightNum;
		cin >> planes[i].planeType;
	};
	sort(planes, planes + N, Aeroflot::compOnName);
	cout << "type: ";
	cin >> type;
	for (unsigned int i = 0; i < N; i++) {
		if (planes[i].planeType == type) {
			planes[i].output();
		};
	};
	return 0;
}
