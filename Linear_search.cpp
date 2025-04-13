#include <bits/stdc++.h>
using namespace std;
int linear_search(int arr[],int n,int target)
{
    int i;
    for(int i=0;i<n;i++)
    {
        if(arr[i]==target)
        {
            return i;
        }
    }
    return -1;
}
int main()
{
    int n;
    cout<<"enter the size of array:";
    cin>>n;
    int target;
    cout<<"enter the target:";
    cin>>target;
    int arr[n];
    cout<<"enter the array elements:";
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    int res=linear_search(arr,n,target);
    cout<<"the target is found at index:";
    cout<<res;
    return 0;
}
