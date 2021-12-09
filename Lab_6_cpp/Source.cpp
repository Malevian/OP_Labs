#define _USE_MATH_DEFINES

#include <iostream>
#include <cmath>

using namespace std;

float Surface(float, float, float);
float max_surf(float, float);

int main() {
	int triangles;
	float side1, side2, angle;
	float array_tri, max_array, result;
	max_array = 0;
	cout << "The amount of triangles: " << endl;
	cin >> triangles;

	cout << "Enter the value of the 2 sides and angle between them (angle 0 to 180)" << endl;
	for (int i = 1; i <=triangles; i++) {
		cin >> side1 >> side2 >> angle;
		array_tri = Surface(side1, side2, angle);
		cout << "Array equals:" << array_tri << endl;
		max_array = max_surf(max_array, array_tri);
	}
	cout << "The biggest array is " << max_array;
}
float Surface(float a, float b, float degree) {
	float Angle = degree * M_PI / 180;
	return(a * b * sin(Angle) / 2);
}
float max_surf(float max, float current) {
	if (max < current) {
		return current;
	}
	else {
		return max;
	}
}

