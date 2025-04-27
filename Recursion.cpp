#include <iostream>
using namespace std;
void recuersion(int num)
{
    if (num <= 5)
    {
        cout << num << " ";
        recuersion(num + 1);
    }
}
int main()
{
    int num = 1;
    recuersion(num);
    return 0;
}