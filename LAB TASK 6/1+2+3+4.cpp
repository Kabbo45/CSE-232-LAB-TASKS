#include <iostream>
#include <conio.h>
using namespace std;

void string_insert()
{
    string a, b;
    int k;
    k = k-1;
    cout << "\n\nEnter a string: ";
    cin >> a;
    cout << "\nEnter a value where you want to insert the string: ";
    cin >> k;
    cout << "\nEnter a string for insert: ";
    cin >> b;
    a.insert(k, b);
    cout <<"\nAfter insertion, String is: " << a;
}

void string_delete()
{
    string a;
    int x1, x2;
    cout << "\n\nEnter a string: ";
    cin >> a;
    cout << "\nEnter the begin erasing value: ";
    cin >> x1;
    cout << "\nEnter the last erasing value: ";
    cin >> x2;
    a.erase(x1, x2);
    cout <<"\nAfter deletation, String is: " << a;
}

void string_replace()
{
    string a, b;
    int x1, x2;
    cout << "\n\nEnter a string: ";
    cin >> a;
    cout << "\nEnter a begin value of the string: ";
    cin >> x1;
    cout << "\nEnter a last value of the string: ";
    cin >> x2;
    cout << "\nEnter a string for replacing: ";
    cin >> b;
    a.replace(x1, x2, b);
    cout <<"\nAfter replacing, String is: " << a;
}

void pattern()
{
    string a = "My name is Kabbo Kabbo";
    string b;
    cout << "Given String: " << a;
    cout << "\nEnter a value to search in the string: ";
    cin >> b;
    int x = a.find(b);
    while(x>=0)
    {
        cout << "Found in " << x+1 << " index" << endl;
        x = a.find(b, x+1);
    }
}

int main()
{
    int n;
    cout << "\n\t\t[1] Run string_insert() function." << endl;
    cout << "\t\t[2] Run string_delete() function." << endl;
    cout << "\t\t[3] Run string_replace() function." << endl;
    cout << "\t\t[4] Run pattern() function." << endl;
    cout << "\n\t\tChoose your option: ";
    cin >> n;

    switch (n)
    {
    case 1:
        string_insert();
        break;
    case 2:
        string_delete();
        break;
    case 3:
        string_replace();
        break;
    case 4:
        pattern();
        break;
    default:
        cout << "Error!!" << endl;
    }
    getch();
}
