#include<iostream>
using namespace std;
int b_s(char a[], int n, int i)
{
    int big, end, mid;
    char k;
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
            cout << "'"<< k << "' found at location " << mid+1 <<endl;
            break;
        }
        else
            end = mid - 1;
        mid = (big + end)/2;
    }
    if(big > end)
        cout << "Not found!" << endl;
}

int main()
{
    int i, n;
    char a[100];
    cout << "Enter number of elements: ";
    cin >> n;
    cout << "Enter sorted " << n << " integers:" << endl;
    for(i = 0; i < n; i++)
        cin >> a[i];
    b_s(a, n, i);
}
