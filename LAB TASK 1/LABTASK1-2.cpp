#include <iostream>
using namespace std;

int display(int a[], int n)
{
    int sum=0;
    float average;
    for (int i = 0; i < n; i++)
        sum += a[i];
    average = sum/n;
    return average;
}

int main()
{
    int a[100], n, i;
    cout << "Enter n = ";
    cin >> n;
    for (i = 0; i < n; i++)
        cin >> a[i];
    cout << display(a, n);
}
