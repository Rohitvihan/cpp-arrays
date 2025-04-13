#include <bits/stdc++.h>
using namespace std;
void move_0s_to_End(int arr[],int n)
{
    int j;
    for(int i=0;i<n;i++)
    {
        if(arr[i]==0)
        {
          j=i;
          break;
        }
    }
    for(int i=j+1;i<n;i++)
    {
        if(arr[i]!=0)
        {
            swap(arr[i],arr[j]);
            j++;
        }
    }
}
int main()
{
    int n;
    cout<<"enter the size:";
    cin>>n;
    int arr[n];
    cout<<"enter the array elements:";
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    move_0s_to_End(arr,n);
    cout<<"the array after moving 0's to end is:";
    for(int i=0;i<n;i++)
    {
        cout<<arr[i];
    }
    return 0;
}
