#include <iostream>

using namespace std;

int main() {
	int n;
	float y = 0;

 cout << "Pick a natural number: " << endl;
 cin >> n;

	for (int i = n; i>0; i--)
		y = pow(y + 3 * i, 0.5);
	cout << "The value is " << y;
}