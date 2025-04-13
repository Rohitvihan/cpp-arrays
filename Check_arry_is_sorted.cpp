#include<bits/stdc++.h>
using namespace std;
int check_arry_sorted(int arr[],int n)
{
    int j=0;
    for(int i=1;i<n;i++)
    {
        if(arr[i]>arr[j])
        {
            j+=1;
        }
        else
        {
            return false;
        }
    }
    return true;
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
    int res=check_arry_sorted(arr,n);
    if(res==0)
    {
        cout<<"array is not in sorted way";
    }
    else if(res==1)
    {
        cout<<"array is in sorted way";
    }
    return 0;
}
