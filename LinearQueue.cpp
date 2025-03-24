#include <iostream>
using namespace std;

class queue
{
    int queue1[5];
    int rear, front;

public:
    queue()
    {
        rear = -1;
        front = -1;
    }

    void insert(int x)
    {
        if (rear == 4)
        {
            cout << "Queue Overflow\n";
            return;
        }
        else
        {
            queue1[++rear] = x;
            cout << "Inserted Element: " << x << endl;
        }
    }

    void delet()
    {
        if (front == rear)
        {
            cout << "Queue Underflow\n";
            return;
        }
        else
        {
            cout << "Deleted Element: " << queue1[++front] << endl;
        }
    }

    void display()
    {
        if (front == rear)
        {
            cout << "Queue is empty\n";
            return;
        }
        else
        {
            cout << "Queue Elements: ";
            for (int i = front + 1; i <= rear; i++)
            {
                cout << queue1[i] << " ";
            }
            cout << endl;
        }
    }
};

int main()
{
    int ch, value;
    queue qu;

    while (true)
    {
        cout << "\n1.Insert 2.Delete 3.Display 4.Exit\nEnter choice: ";
        cin >> ch;

        switch (ch)
        {
        case 1:
            cout << "Enter the Element: ";
            cin >> value;
            qu.insert(value);
            break;
        case 2:
            qu.delet();
            break;
        case 3:
            qu.display();
            break;
        case 4:
            exit(0);
        default:
            cout << "Invalid choice! Try again.\n";
            break;
        }
    }
}
