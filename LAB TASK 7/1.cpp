#include <iostream>
using namespace std;

char stack[50];
int maxstk = 50, top = 0;

void push_ch(char n)
{
    if (top == maxstk)
    {
        cout<<"Overflow";
    }
    else
    {
        top += 1;
        stack[top] = n;
    }
}

void pop_ch()
{
    if (top == 0)
    {
        cout<<"Underflow";
    }
    else
    {
        top -= 1;
        cout << "\n'" <<stack[top] << "'" << " popped out." << endl;
        cout<<"-------------------------------------------\n";
    }
}

void dis()
{
    if(top>0)
    {
        cout<<"The stack elements are: \n";
        cout<<"=======================\n";
        for (int i = top; i > 0; --i)
        {
            cout<<stack[i]<<endl;
        }
    }

    else
        cout << "\nThe stack is empty." << endl;
}

int main()
{
    int a;
    char n;

    do
    {
        cout<<"===============\n";
        cout<<"|  1. Push    |\n";
        cout<<"|  2. Pop     |\n";
        cout<<"|  3. Display |\n";
        cout<<"|  4. Exit    |\n";
        cout<<"===============\n";
        cout << "\nEnter your choice: ";
        cin >> a;

        switch(a)
        {
        case 1:
            cout << "\nEnter a character to push into the stack: ";
            cin >> n;
            push_ch(n);
            break;

        case 2:
            pop_ch();
            break;

        case 3:
            dis();
            break;

        case 4:
            cout<<"Exit\n";
            break;

        default:
            cout<<"Invalid";
            system("cls");
            break;
        }
    }
    while (a!=4);

    return 0;
}
