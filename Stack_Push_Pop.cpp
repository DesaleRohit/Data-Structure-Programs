#include <iostream>
using namespace std;
class StackDemo
{
    int stack[5];
    int top;

public:
    StackDemo()
    {
        top = -1;
    }
    void push(int x)
    {
        if (top >= 4)
        {
            cout << "Stack is OverFlow";
        }
        else
        {
            stack[++top] = x;
            cout << "Element inserted " << endl;
        }
    }
    void pop()
    {
        if (top < 0)
        {
            cout << "Stack is UnderFlow";
        }
        else
        {
            cout << "Deleted Element is :" << stack[top--] << endl;
        }
    }
    void display()
    {
        if (top < 0)
        {
            cout << "Stack is Empty.." << endl;
        }
        else
        {
            for (int i = top; i >= 0; i--)
            {
                cout << stack[i] << endl;
            }
        }
    }
};
int main()
{
    StackDemo stackdemo;
    int ch, value;
    while (1)
    {
        cout << "1.PUSH \n2.POP \n3.Display \n4.Exit" << endl;
        cout << "Enter the Operation Number : ";
        cin >> ch;

        switch (ch)
        {
        case 1:
            cout << "Enter the Elements : " << endl;
            cin >> value;
            stackdemo.push(value);
            break;

        case 2:
            stackdemo.pop();
            break;

        case 3:
            stackdemo.display();
            break;

        case 4:
            exit(0);

        default:
            cout << "Invalid choice !! Please enter a valid option.." << endl;
        }
    }
    return 0;
}
