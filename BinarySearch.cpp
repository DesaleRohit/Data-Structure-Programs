#include <iostream>
using namespace std;
int main()
{
    int size, i, search, first, last, middle;
    cout << "Enter the Size : ";
    cin >> size;
    int a[size];
    cout << "Enter the Elements : ";
    for (i = 0; i < size; i++)
    {
        cin >> a[i];
    }
    cout << "Enter the Element for Search : ";
    cin >> search;

    first = 0;
    last = size - 1;
    middle = (first + last) / 2;

    while (first <= last)
    {
        if (a[middle] < search)
        {
            first = middle + 1;
        }
        else if (a[middle] == search)
        {
            cout << search << "fount at Index location " << middle << endl;
            break;
        }
        else
        {
            last = middle - 1;
        }
        middle = (first + last) / 2;
    }
    if (first > last)
    {
        cout << "Element is Not-found ";
    }
}