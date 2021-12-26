#include <iostream>
#include <string>

using namespace std;

int main() {
	char s[255];
	cout << "Enter the sentence: ";
	gets_s(s);
	char space = ' ';
	int counter = 0;
//Створення масиву
	char** ps1 = new char* [sizeof(s)];
	for (int i = 0; i < sizeof(s); i++) {
		ps1[i] = new char[sizeof(s)];
	}
	for (int i = 0; i < sizeof(s); i++) {
// Switch використаний для того, щоб при і = 0. Ми не використовували counter
		switch (i) {
		case 0:
			for (int j = 0; j < sizeof(s); j++) {
				if (s[j] != space) {
					ps1[i][j] = s[j];
				}
				else {
					break;
				}
				counter++;
			}
			break;
		default:
			counter++;
			for (int j = 0; j < sizeof(s); j++) {
				if (s[j + counter] != space) {
					ps1[i][j] = s[j + counter];
				}
				else {
					ps1[i][j] = '\0';
					counter += j;
					break;
				}
			}
		}
	}
	//Вивід отриманого масиву
	for (int i = 0; i < sizeof(s); i++) {
		for (int j = 0; j < sizeof(s); j++) {
			cout << ps1[i][j];
		}
		cout << endl;
	}
	cout << endl;
	// Сортування за зростанням
	char term = 0;
	for (int i = 0; i < sizeof(s) - 1; i++) {
		for (int j = 0; j < sizeof(s) - 1; j++) {
			if (ps1[i][0] > ps1[i + 1][0]) {
				term = ps1[i][j];
				ps1[i][j] = ps1[i + 1][j];
				ps1[i + 1][j] = term;
			}
			else
				break;
		}
	}
	//Вивід отриманого масиву
	for (int i = 0; i < sizeof(s); i++) {
		for (int j = 0; j < sizeof(s); j++) {
			cout << ps1[i][j];
		}
		cout << endl;
	}
	//Видалення масиву
	for (int i = 0; i < sizeof(s); i++) {
		delete[] ps1[i];
	}
	delete[]ps1;
}

/*Якщо ви це читаєте, то можете пояснити, де я помилився.
Я цю лабу робив дуже довго, намагаючись зробити це без стрінгу, але не зміг*/