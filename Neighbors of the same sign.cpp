#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int arr[1000];
    for(int i=0; i<n; i++)
    {
        cin>>arr[i];
    }
    for(int i=0; i<n; i++)
    {
        if((arr[i]>0 && arr[i+1]>0) || (arr[i]<0 && arr[i+1]<0))
        {
            cout<<arr[i]<<" "<<arr[i+1]<<endl;
        }
    }
}
