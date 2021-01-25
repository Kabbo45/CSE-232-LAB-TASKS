#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    float a, b, c, x1, x2, p;
    cout << "Enter the values: " << endl;
    cout << "a = ";
    cin >> a;
    cout << "b = ";
    cin >> b;
    cout << "c = ";
    cin >> c;
    p = (b*b) - (4*a*c);

    if (p > 0)
    {
        x1 = (-b + sqrt(p)) / (2*a);
        x2 = (-b - sqrt(p)) / (2*a);
        cout << "x1 = " << x1 << "x2 = " << x2 << endl;
    }
    else if (p == 0)
    {
        x1 = -b/(2*a);
        cout << "x1 = " << x1 << "x2 = " << x2 << endl;
    }
    else
    {
    cout << "D = " << p <<endl;
    cout << "The value is negative";
    }
    return 0;
}