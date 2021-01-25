#include <iostream>
using namespace std;
int insertarray(int a[], int n, int i, int p, int v)
{
    for (i = 0; i < n; i++)
        cin >> a[i];

    cout << "Enter the position you want to insert an element: ";
    cin >> p;
    cout << "Insert the value: ";
    cin >> v;
    for (i = n - 1; i >= p - 1; i--)
        a[i+1] = a[i];

    a[p-1] = v;

    cout << "Final array is: " << endl;
    for (i = 0; i <= n; i++)
        cout << a[i] << endl;
}
int main()
{
    int a[100], n, p, v, i;
    cout << "Enter the number of elements in the array: ";
    cin >> n;
    cout << "Enter the " << n << " elements:" << endl;
    insertarray(a, n, i, p, v);
}
