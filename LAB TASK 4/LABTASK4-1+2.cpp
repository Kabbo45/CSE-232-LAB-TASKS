#include<iostream>
using namespace std;

int selection(int a[], int n, int i)
{
    int j, min, temp;
    for(i = 0; i < n - 1; i++)
    {
        min = i;
        for(j = i+1; j < n; j++)
        {
            if(a[min] > a[j])
                min = j;
        }
            temp = a[i];
            a[i] = a[min];
            a[min] = temp;
    }
    cout << endl;
    cout << "Sorted Array:" << endl;
    for(i = 0; i < n; i++)
        cout << a[i] << endl;
}

////////////////////////////////////////////////////////////////////

int binary(int a[], int n, int i)
{
    int big, end, mid, k;
    cout << endl;
    cout << "Enter a value to find: ";
    cin >> k;
    big = 0;
    end = n - 1;
    mid = (big+end)/2;
    while (big <= end)
    {
        if(a[mid] < k)
            big = mid + 1;
        else if (a[mid] == k)
        {
            cout << k << " found at location " << mid+1 <<endl;
            break;
        }
        else
            end = mid - 1;
        mid = (big + end)/2;
    }
    if(big > end)
        cout << "Not found!" << endl;
}

/////////////////////////////////////////////////////////////////////

int main()
{
    int i, n, a[100];
    cout << "Enter number of elements: ";
    cin >> n;
    cout << "Enter the " << n << " integers:" << endl;
    for(i = 0; i < n; i++)
        cin >> a[i];
    selection(a, n, i);
    binary(a, n, i);
}
