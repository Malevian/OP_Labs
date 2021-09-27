#include <iostream>

using namespace std;

int main() {
	float a, S, V;
	cin >> a;
	if (a > 0) {

		S = 6 * a * a;
		cout << "\nSurface area of the cube:" << S << endl;
		V = a * a * a;
		cout << "\nVolume of the cube :" << V << endl;
	}
	else if (a <= 0)
	{
		cout << "\n Action unavailable!" << endl;
	}

	return 0;
}