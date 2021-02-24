#include <iostream>
using namespace std;

int tower(int n)
{
    if(n > 0)
    {
        int x, y;
        y = tower(n-1);
        x = (2*y)+1;
    }
   else
    return 0;
}

int main()
{
    int n = 0;
    cout << "Enter a value: ";
    cin >> n;
    tower(n);
    cout << "Total Moves: " << tower(n);
    return 0;
}
