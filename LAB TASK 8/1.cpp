#include <iostream>
using namespace std;

string queue[50];
int n = 50, front = 0, rear = 0;

void queue_insert(string item)
{
    if(front == 1 && rear == n)
        cout << "Queue Overflowed" << endl;
    else if(front == 0)
    {
        front = 1;
        rear = 1;
    }
    else
        rear += 1;

    queue[rear] = item;
}


void queue_delete()
{
    if(front == 0)
    {
        cout << "\nQueue Underflowed" << endl;
    }
    else if (front == rear)
    {
        cout << queue[front] << " is deleted." << endl;
        front = 0;
        rear = 0;
    }

    else
    {
        cout << queue[front] << " is deleted." << endl;
        front += 1;
    }
}



void display()
{
    if(front > 0)
    {
        cout << "\nThe elements are: \n";
        int i;
        for(i = front; i <= rear; i++)
        {
            cout << queue[i] << endl;
        }
    }


    else
        cout << "The queue is empty." << endl;
}


int main()
{
    int a;
    string n;

    cout<<"======================\n";
    cout<<"|  1. Queue Insert   |\n";
    cout<<"|  2. Queue Delete   |\n";
    cout<<"|  3. Display        |\n";
    cout<<"|  4. Exit           |\n";
    cout<<"======================\n";

    do
    {
        cout << "\nEnter your choice: ";
        cin >> a;

        switch(a)
        {
        case 1:
            cout << "\nEnter a character to insert into the queue: ";
            cin >> n;
            queue_insert(n);
            break;

        case 2:
            queue_delete();
            break;

        case 3:
            display();
            break;

        case 4:
            cout<<"Programme Closed\n";

            break;

        default:
            cout<<"\nInvalid choice. Try again.\n";
            main();
            break;
        }
    }
    while (a!=4);

    return 0;
}

