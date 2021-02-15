#include<iostream>
using namespace std;

void r_s(string text, char pattern1, char pattern2)
{
    int x = text.find(pattern1);
    while(x>=0)
    {
        x = text.find(pattern1, x+1);
        if(x>1)
        {
            int y = text.find(pattern2);
            while(y>=0)
            {
                cout << "Found in " << y+1 << " index" << endl;
                y = text.find(pattern2, y+1);
            }
        }
        else
            cout << "Found in " << x+1 << " index" << endl;
    }
}

int main()
{
    string text;
    char pattern1;
    char pattern2;
    cout << "Enter a string: ";
    cin >> text;
    cout << "Enter pattern1: ";
    cin >> pattern1;
    cout << "Enter pattern2: ";
    cin >> pattern2;
    r_s(text, pattern1, pattern2);
}
