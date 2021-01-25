#include <iostream>
using namespace std;

int bubblesort(int a[], int i, int j, int n)
{
    int temp;
    for(i = 0; i<n-1; i++)

        for(j = 0; j<n-i-1; j++)
        {
            if(a[j] > a[j+1])
            {
                temp = a[j];
                a[j] = a[j+1];
                a[j+1] = temp;
            }
        }
    cout <<"Bubble Sorted List: " << endl;
    for(i = 0; i<n; i++)
        cout <<a[i]<< endl;
}

int main()
{
    int a[100], i, j, n;

    cout << "Enter the number of elements in this array: ";
    cin >> n;
    cout << "Enter the " << n << " elements:" << endl;

    for (i = 0; i < n; i++)
        cin >> a[i];

    bubblesort(a, i, j, n);
}
