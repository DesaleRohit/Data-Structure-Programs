#include <iostream>
using namespace std;
void linearsearch(int a[], int item)
{
    int found = 0;
    for (int i = 0; i < 5; i++)
    {
        if (item == a[i])
        {
            cout << "Element fount at Index : " << i << endl;
            cout << "item is : " << item;
            found = 1;
            break;
        }
    }
    if (!found)
    {
        cout << "Element is Not-Found";
    }
}
int main()
{

    int a[] = {1, 2, 50, 65, 20};
    int item;
    cout << "Enter the Element to search : ";
    cin >> item;

    linearsearch(a, item);
    return 0;
}