#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
	float x;

	cout << "Pick a number: ";
	cin >> x;

	float
	term = x,
	s = term,
	eps = 10e-8;
	int	n = 1;

	do
	{
		term = x * x / (2 * n * (2 * n + 1))*term;
		cout << "term = " << setw(10) << fixed << setprecision(8) << term << endl;
		s += term;
		n++;
	} while (fabs(term) > eps);
	cout << "The sum equals " << s;
	return 0;
}