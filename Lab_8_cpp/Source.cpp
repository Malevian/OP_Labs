#include <iostream>
#include <time.h>
#include <iomanip>
#include <stdio.h>

using namespace std;

void output(int**, int);				// In progress....
void remove(int**, int);
void search(int**, int);

int main() {
	srand(time(NULL));
	int n;
	cout << "Enter the size of the square matrix ";
	cin >> n;
	int** arr = new int* [n];
	for (int i = 0; i < n; i++)
		arr[i] = new int[n];
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			arr[i][j] = rand() % 15 - 5;
		}
	}
	output(arr, n);
	search(arr, n);
	remove(arr, n);
}
void output(int** Arr, int n) {
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++)
			cout << setw(5) << Arr[i][j];
		cout << endl;
	}
}
void remove(int** Arr, int n) {
	for (int i = 0; i < n; i++)
		delete[] Arr[i];
	delete[]Arr;
}
void search(int** Arr, int n) {
	int p, minimal, maximum;
	for (int i = 0; i < n; i++) {
		int minimal = 16;
		int maximum = -6;
		for (int j = 0; j < n; j++) {
			int pos_min = 0, pos_max = 0;
			if (Arr[i][j] < minimal) {
				minimal = Arr[i][j];
				pos_min = j;
			}
			for (int k = 0; k < n; k++) {
				if (Arr[k][pos_min] > maximum)
					maximum = Arr[k][pos_min];
				pos_max = k;
			}
			if (minimal == maximum) {
				p = minimal;
				cout << "Point equals " << p << endl;
				cout << minimal << setw(4) << maximum << endl;
				cout << pos_min << setw(4) << pos_max << endl;
			}
			else
				cout << "Nothing" << endl;
		}
		cout << "Min " << minimal << endl;
		cout << "Max " << maximum << endl;
		cout << endl;
	}
}