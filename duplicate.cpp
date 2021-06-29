#include <iostream>
using namespace std;
 
int main()
{
    int arr[100];
    int i, j, n, count = 1;
    cin>>n;
    for(i=0; i<n; i++)
    {
        cin>>arr[i];
    }
    for(i=0; i<n; i++)
    {
        for(j=i+1; j<n; j++)
        {
        if(arr[i] == arr[j])
            {
                count++;
                break;
            }
        }
    }
    cout<<count;
 
    return 0;
}
