#include <bits/stdc++.h>
using namespace std;
int remove_duplicates(int arr[],int n)
{
    int i=0;
    for(int j=1;j<n;j++)
    {
        if(arr[j]!=arr[i])
        {
            arr[i+1]=arr[j];
            i+=1;
        }
    }
    return i+1;
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
    int res=remove_duplicates(arr,n);
    cout<<"result is:"<<res;
    return 0;
}
