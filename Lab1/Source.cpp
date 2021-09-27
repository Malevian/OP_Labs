#include <iostream>

using namespace std;

int main() {
	float a, S, V;
	cin >> a;
	if (a > 0) {

		S = 4 * a * a;
		cout << "\nSurface area of cube:" << S << endl;
		V = a * a * a;
		cout << "\nVolume of cube :" << V << endl;
	}
	else if (a <= 0)
	{
		cout << "\n Action unavailable!" << endl;
	}

	return 0;
}