#include <bits/stdc++.h>
using namespace std;
int num_ones(int n,int arr[])
{
    int xxor=0;
    for(int i=0;i<n;i++)
    {
        xxor=xxor^arr[i];
    }
    return xxor;
}
int main()
{
    int n;
    cout<<"enter the size of the array:";
    cin>>n;
    int arr[n];
    cout<<"enter the array elements:";
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    int res=num_ones(n,arr);
    cout<<"the number that appear one time is:";
    cout<<res;
}
