#include <iostream>
#include <stdio.h>
#include <iomanip>
#include <time.h>

using namespace std;

void output(float*, int);
float search(float*, int); 
void sort(float[], int, int);

int main() {
    srand(time(NULL));
    int n, Position;
    cout << "Enter the size of the array B: "; cin >> n;
    float* p = new float[n];
    for (int i = 0; i < n; i++)
        p[i] = float(rand()) / RAND_MAX * 200 - 100;
    cout << "Array B:"; output(p, n);
    Position = search(p, n);
    cout << "\nThe position of the element - " << Position;
    cout << "\nSorted B:"; sort(p, n, Position);
    delete[]p;
}
void output(float* p, int n) {
    for (int i = 0; i < n; i++)
        cout << setw(7) << fixed << setprecision(1) << *(p + i);
}
float search(float* p, int n) {
    float result = 0;
    int position = 0;
    for (int i = 0; i < n; i++) {
        if (*p < result && *p < 0) {
            result = *p;
            position = i + 1;
        }
        p++;
    }
    cout << "\nMinimal value: " << result;
    return position;
}
void sort(float m[], int n, int position) {
    int add = 0;
    for (int i = 0; i < n; i++) {
        for (int j = i + 1; j < position; j++) {
            if (m[i] < m[j]) {
                add = m[i];
                m[i] = m[j];
                m[j] = add;
            }
        }
        cout << setw(7) << fixed << setprecision(1) << m[i];
    }
}