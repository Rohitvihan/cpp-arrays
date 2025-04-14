
#include<bits/stdc++.h>
using namespace std;
int sec_smallest_element(int arr[],int n)
{
    int small=arr[0];
    int sec_small=INT_MAX;
    for(int i=1;i<n;i++)
    {
        if(arr[i]<small)
        {
            sec_small=small;
            small=arr[i];
        }
        if(arr[i]<sec_small && arr[i]!=small)
        {
            sec_small=arr[i];
        }
    }
    return sec_small;
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
    int res=sec_smallest_element(arr,n);
    cout<<"the second smallest element in the array is:"<<res;
    return 0;
}
