#include <iostream>
using namespace std;
int main()
{
    int size;
    cout << "Enter the size : ";
    cin >> size;
    int a[size];
    cout << "Enter the Elements :";
    for (int i = 0; i < size; i++)
    {
        cin >> a[i];
    }
    cout << "Before Sorting : ";
    for (int i = 0; i < size; i++)
    {
        cout << a[i] << "  ";
    }
    for (int i = 1; i <= size - 1; i++)
    {
        int temp = a[i];
        int j = i - 1;
        while ((temp < a[j]) && (j >= 0))
        {
            a[j + 1] = a[j];
            j = j - 1;
        }
        a[j + 1] = temp;
    }
    cout << endl
         << "After Sorting : ";
    for (int i = 0; i < size; i++)
    {
        cout << a[i] << " ";
    }
}