#include <iostream>
using namespace std;
int main()
{
    int stack[5] = {10, 20, 30};
    int elements = 3;
    int top = elements - 1;

    cout << "Before Operation om Stack : " << endl;
    for (int i = top; i >= 0; i--)
    {
        cout << stack[i] << endl;
    }
    cout << endl;

    // PUSH Operation
    if (top >= 4)
    {
        cout << "Stack is OverFlow " << endl;
    }
    else
    {
        top += 1;
        stack[top] = 1000;
    }

    cout << "Stack After PUSH Operation : " << endl;
    for (int i = top; i >= 0; i--)
    {
        cout << stack[i] << endl;
    }

    // POP Operation
    if (top == -1)
    {
        cout << "Stack underflow" << endl;
    }
    else
    {
        top -= 1; // Remove top element
    }

    cout << "Stack After POP Operation : " << endl;
    if (top == -1)
    {
        cout << "Stack is empty" << endl;
    }
    else
    {
        for (int i = top; i >= 0; i--)
        {
            cout << stack[i] << endl;
        }
    }
    return 0;
}