#include <iostream>
#include <time.h>
#include <iomanip>
#include <stdio.h>

using namespace std;

int** input(int);
void output(int**, int);
void remove(int**, int);
void search(int**, int);

int main() {
	srand(time(NULL));
	int n;
	cout << "Enter the size of the square matrix ";
	cin >> n;
	int** arr;
	arr = input(n);
	output(arr, n);
	search(arr, n);
	remove(arr, n);
}
//Створення двовимірного масиву
int** input(int n) {
	int** arr = new int* [n];
	for (int i = 0; i < n; i++)
		arr[i] = new int[n];
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			arr[i][j] = rand() % 15 - 5;
		}
	}
	return arr;
}
//Вивід двовимірного масиву
void output(int** Arr, int n) {
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++)
			cout << setw(5) << Arr[i][j];
		cout << endl;
	}
}

//Видалення двовимірного масиву
void remove(int** Arr, int n) {
	for (int i = 0; i < n; i++)
		delete[] Arr[i];
	delete[]Arr;
}
//Знаходження сідлової точки
void search(int** Arr, int n) {
	int res = 16, res_pos_min = 0, res_pos_max = 0;
	for (int i = 0; i < n; i++) {
		int minimal = 16, maximum = -6;
		int pos_min_col = 0, pos_min_row = 0;
		int pos_max_col = 0, pos_max_row = 0;
		for (int j = 0; j < n; j++) {
			if (Arr[i][j] < minimal) {
				minimal = Arr[i][j];
				pos_min_row = j;
				pos_min_col = i;
			}
		}
		for (int k = 0; k < n; k++) {
			if (Arr[k][pos_min_row] > maximum) {
				maximum = Arr[k][pos_min_row];
				pos_max_col = k;
				pos_max_row = pos_min_row;
			}
		}
		if (minimal == maximum && pos_max_row == pos_min_row && pos_max_col == pos_min_col) {
			res = minimal;
			res_pos_min = pos_min_row;
			res_pos_max = pos_max_col;
		}
	}
	if (res != 16) {
		cout << "The point equals " << res << endl;
		cout << "The position is [" << res_pos_max + 1 << "," << res_pos_min + 1 << "]";
	}
	else
		cout << "There's no point";
}