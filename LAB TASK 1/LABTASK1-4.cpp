#include <iostream>
using namespace std;

void swapping(char *abc, char *ABC)
{
    char temp = *abc;
    *abc = *ABC;
    *ABC = temp;
}

int main()
{
    char abc;
    char ABC;
    cout << "Character 1: ";
    cin >> abc;
    cout << "Character 2: ";
    cin >> ABC;
    swapping(&abc, &ABC);
    cout << "After Swapping:" << endl;
    cout << "Character 1: " << abc << endl;
    cout << "Character 2: " << ABC << endl;
}
