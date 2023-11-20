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
    int max = -100;
    for(int i=0; i<n; i++)
    {
        if(arr[i]>=max)
        {
            max = arr[i];
            num = i;
        }
    }
    int swap;
    swap = arr[num];
    arr[num] = arr[n-1];
    arr[n-1] = swap;
    for(int i=0; i<n; i++)
        cout << arr[i] << " ";
}
