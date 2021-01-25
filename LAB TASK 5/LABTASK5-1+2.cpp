#include<iostream>
using namespace std;

void selection(int a[], int n, int i)
{
    int j, min, temp, k=0;
    for(i = 0; i < n - 1; i++)
    {
        min = i;
        for(j = i+1; j < n; j++)
        {
            k++;
            if(a[min] > a[j])
                min = j;
        }
        temp = a[i];
        a[i] = a[min];
        a[min] = temp;
    }
    cout << endl;
    cout << "Selection Sorted Array:" << endl;
    for(i = 0; i < n; i++)
        cout << a[i] << endl;
    cout << "Time Complexity: " << k << endl;
}

//////////////////////////////////////////////////

void insertion(int a[], int n, int i)
{
    int temp, j, k=0;
    for(i = 1; i < n; i++)
    {
        int temp = a[i];
        j = i-1;
        k++;
        while(j>=0 && a[j]>temp)
        {
            a[j+1] = a[j];
            j = j-1;
        }
        a[j+1] = temp;
    }
    cout << endl;
    cout << "Insertion Sorted Array:" << endl;
    for (i = 0; i < n; i++)
        cout << a[i] << endl;
    cout << "Time Complexity: " << k << endl;
}

///////////////////////////////////////////////////

int main()
{
    int i, n, a[100];
    cout << "Enter number of elements: ";
    cin >> n;
    cout << "Enter the " << n << " integers:" << endl;
    for(i = 0; i < n; i++)
        cin >> a[i];
    selection(a, n, i);
    insertion(a, n, i);
}
