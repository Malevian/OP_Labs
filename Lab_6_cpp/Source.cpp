#include <iostream>
#include <cmath>

using namespace std;

float side1, side2, angle;
float array_tri; 

float Surface(float, float, float);

int main() {
	int triangles;

	cout << "The amount of triangles: " << endl;			// In progress.....
	cin >> triangles;
	cout << "Enter the value of the 2 sides and angle between them(in radian)" << endl;
	while (triangles != 0) {
		cin >> side1 >> side2 >> angle;
		array_tri = Surface(side1, side2, angle);
		triangles -= 1;
		cout << "Array equals:" << array_tri << endl;
	}

}

float Surface(float a, float b, float degree) {
	return(a * b * sin(degree)) / 2;
}