#include <iostream>
using namespace std;

void func(int data[], int count, int n)
{
    int i;
    for(i = 0; i < count; i++)
    {
        if(data[i] == n)
        {
            break;
        }
    }
    if (i < count){
         cout << n << " found in the array at index = " << i+1;}
    else
            cout << "No data found!!";
}

int main()
{
    int data[] = {-1,-2,13,12,14,7,6,5,4};
    int count, i, n;
    cout << "Enter a number to search in this Array [-1,-2,13,12,14,7,6,5,4]\n\n";
    cin >> n;
    func(data, count, n);
    return 0;
}
