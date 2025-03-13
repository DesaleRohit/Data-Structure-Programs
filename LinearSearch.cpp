#include <iostream>
using namespace std;
int main()
{
    int a[5] = {1, 5, 40, 60, 20};
    int i, item;
    int found = 0;
    cout << "Enter the element to search :  ";
    cin >> item;
    for (i = 0; i < 5; i++)
    {
        if (a[i] == item)
        {
            cout << "Element found at Index : " << i;
            cout << " Element is : " << item;
            found = 1;
            break;
        }
    }
    if (!found)
    {
        cout << "Element is Not-Found";
    }
}