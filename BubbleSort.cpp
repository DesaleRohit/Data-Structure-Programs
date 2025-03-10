#include <iostream>
using namespace std;

int main() {
    int size;
    cout << "Enter the Size: ";
    cin >> size;
    int a[size];

    cout << "Enter the Elements: ";
    for (int i = 0; i < size; i++) {
        cin >> a[i];
    }

    cout << "Before Sorting: ";
    for (int i = 0; i < size; i++) {
        cout << a[i] << "  ";
    }
    cout << endl;

    for (int i = 0; i < size - 1; i++) {
        for (int j = 0; j < size - i - 1; j++) {
            if (a[j] > a[j + 1]) { 
                int temp = a[j];
                a[j] = a[j + 1];
                a[j + 1] = temp;
            }
        }
    }

    cout << "After Sorting: ";
    for (int i = 0; i < size; i++) {
        cout << a[i] << "  ";
    }
    return 0;
}
