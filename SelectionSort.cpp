#include <iostream>
using namespace std;

int main()
{
    int size;
    cout << "Enter the Size: ";
    cin >> size;
    int a[size];

    cout << "Enter the Elements: ";
    for (int i = 0; i < size; i++)
    {
        cin >> a[i];
    }

    cout << "Before Sorting: ";
    for (int i = 0; i < size; i++)
    {
        cout << a[i] << "  ";
    }
    cout << endl;

    for (int i = 0; i < size - 1; i++)
    {
        int minIndex = i;
        for (int j = i + 1; j < size; j++)
        {
            if (a[j] < a[minIndex])
            {
                minIndex = j;
            }
        }

        int temp = a[i];
        a[i] = a[minIndex];
        a[minIndex] = temp;
    }

    cout << "After Sorting: ";
    for (int i = 0; i < size; i++)
    {
        cout << a[i] << "  ";
    }
    return 0;
}
