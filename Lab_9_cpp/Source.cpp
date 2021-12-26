#include <iostream>
#include <string>

using namespace std;

int main()
{
    int n;
    cout << "How many words will you enter? "; cin >> n;
    string* a = new string[n];

    cin.ignore();
    for (int i = 0; i < n; i++) {
        cout << "string " << i + 1 << ": ";
        getline(cin, a[i]);
    }

    for (int j = 1; j < n; j++)
        for (int k = 0; k < n - j; k++)
            if (a[k] > a[k + 1])
                swap(a[k], a[k + 1]);

    for (int i = 0; i < n; i++) {
        cout << a[i] << endl;
    }

    delete[]a;
}