#include <iostream>
using namespace std;

int main()
{
    int n, num;
    cin >> n;
    int arr[100];
    for(int i=0; i<n; i++)
    {
        cin >> arr[i];
    }
    int min = 100;
    for(int i=0; i<n; i++)
    {
        if(min > arr[i])
        {
            min = arr[i];
            num = i;
        }
    }
    int swap;
    swap = arr[num];
    arr[num] = arr[0];
    arr[0] = swap;
    for(int i=0; i<n; i++)
        cout << arr[i] << " ";
}
