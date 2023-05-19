#include <iostream>
using namespace std;
template <typename T>
struct Queue
{
    int front, rear, n;
    T *queue, *arr;

    Queue(int c) {
        front = rear = -1;
        n =c;
        queue = new T[n];
    }

void
enqueue()
{
    T val;
    if (rear == n - 1)
        cout << "Queue OverflowFull" << endl;
    else
    {
        if (front == -1)
            front = 0;
        cout << "Insert the element in the queue" << endl;
        cin >> val;
        rear++;
        queue[rear] = val;
    }
}

void dequeue()
{
    if (front == -1 || front > rear)
    {
        cout << "Queue UnderflowEmpty";
        return;
    }
    cout << "Element deleted from queue is: " << queue[front] << endl;
    // NO need of shifting left, but this is not a better implementation
    front++;
}

void display()
{
    if (front == -1)
        cout << "Queue is empty" << endl;
    else
    {
        cout << "Queue elements are:";
        for (int i = front; i <= rear; i++)
            cout << queue[i] << ",";
        cout << endl;
    }
}

void readFront()
{
    if (front == -1)
    {
        cout << "Queue undeflow" << endl;
        return;
    }
    cout << "Element at front is" << queue[front] << endl;
}
};

int main()
{
    Queue<char> q(5);
    int ch;
    cout << "1) Insert element to queue" << endl;
    cout << "2) Delete element to queue" << endl;
    cout << "3) Display al the elements of queue" << endl;
    cout << "4) Read element from the queue" << endl;
    cout << "5) Exit" << endl;
    do
    {
        cout << "Enter your choice" << endl;
        cin >> ch;
        switch (ch)
        {
        case 1:
            q.enqueue();
            break;
        case 2:
            q.dequeue();
            break;
        case 3:
            q.display();
            break;
        case 4:
            q.readFront();
        case 5:
            cout << "Exited the Queue" << endl;
            break;
        default:
            cout << "Invalid operation" << endl;
        }
    } while (ch > 0 && ch < 5);
    return 0;
}
