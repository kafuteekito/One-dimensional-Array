#include <iostream>
using namespace std;

int main()
{
    int n, sum=0, count=0, more=0;
    cin >> n;
    int arr[100];
    for(int i=0; i<n; i++)
    {
        cin >> arr[i];
        sum+=arr[i];
    }
    float avg = (float)sum/n;
    for(int i=0; i<n; i++)
    {
        if(arr[i]>avg)
        {
            more+=arr[i];
            count++;
        }
    }
    cout<<more<<" "<<count;
}
