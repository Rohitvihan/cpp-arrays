#include<bits/stdc++.h>
using namespace std;
int smallest_element(int arr[],int n)
{
    int small=arr[0];
    for(int i=1;i<n;i++)
    {
        if(arr[i]<small)
        {
            small=arr[i];
        }
    }
    return small;
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
    int res=smallest_element(arr,n);
    cout<<"the smallest element in the array is:"<<res;
    return 0;
}
