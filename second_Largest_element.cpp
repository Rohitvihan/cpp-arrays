#include<bits/stdc++.h>
using namespace std;
int sec_largest_element(int arr[],int n)
{
    int maxi=arr[0];
    int sec_larg=-1;
    for(int i=1;i<n;i++)
    {
        if(arr[i]>maxi)
        {
            sec_larg=maxi;
            maxi=arr[i];
        }
        if(arr[i]>sec_larg && arr[i]!=maxi)
        {
            sec_larg=arr[i];
        }
    }
    return sec_larg;
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
    int res=sec_largest_element(arr,n);
    cout<<"the second largest element in the array is:"<<res;
    return 0;
}
