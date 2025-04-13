#include <bits/stdc++.h>
using namespace std;
void remove_duplicates(int arr[],int n)
{
    map<int,int>mpp;
    for(int i=0;i<n;i++)
    {
        mpp[arr[i]]+=1;
    }
    cout<<"the duplicate elements are:";
    for(auto it:mpp)
    {
        if(it.second>1)
        {
            cout<<it.first<<" ";
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
    remove_duplicates(arr,n);
    //cout<<"result is:"<<res;
    return 0;
}
