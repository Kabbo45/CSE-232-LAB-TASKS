#include <iostream>
using namespace std;

int deletearray(int a[], int n, int i, int p)
{
    for (i = 0; i < n; i++)
        cin >> a[i];
    cout << "Enter the position you want to delete an element: ";
    cin >> p;

    if(p >= n+1)
        cout << "Error" << endl;
    else
        for(i = p-1; i < n-1; i++)
            a[i] = a[i+1];

    cout << "Final array is: " << endl;
    for (i = 0; i < n-1 ; i++)
        cout << a[i] << endl;
}
int main()
{
    int a[100], i, n, p;
    cout << "Enter the number of elements in this array: ";
    cin >> n;
    cout << "Enter the " << n << " elements:" << endl;
    deletearray(a, n, i, p);
}
