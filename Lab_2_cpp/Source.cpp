#include <iostream>

using namespace std;

int main()
{
	float t;

	cout << "Pick a number greater than 0" << endl;
	cin >> t;
	while (t > 9)
	{
		t -= 9;
	}
	if (t >= 0 && t <=3)
	{
		cout << "Green colour" << endl;
	}
	else if (t > 3 && t <= 4)
	{
		cout << "Yellow colour" << endl;
	}
	else if (t > 4 && t <= 6)
	{
		cout << "Red colour" << endl;
	}
	else if (t > 6 && t <= 9)
	{
		cout << "Green colour" << endl;
	}
	
}


