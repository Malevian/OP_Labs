#include <iostream>

using namespace std;

int main() {

	int n;

	cout << "Pick an amount of the prime numbers: " << endl;
	cin >> n;

	int k = 1;
	do {
		k++;
		bool prime = 1;
		for (int i = 2; i < k / 2 + 1; i++) {
			if (k % i == 0) {
				prime = 0;
			}
		}
		if (prime == 1){
		cout << k << " | ";
		n--;
	}
	} while (n != 0);
	return 0;
}