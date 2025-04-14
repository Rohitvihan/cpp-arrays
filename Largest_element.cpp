#include<bits/stdc++.h>
using namespace std;
int largest_element(int arr[],int n)
{
    int maxi=arr[0];
    for(int i=0;i<n;i++)
    {
        if(arr[i]>maxi)
        {
            maxi=arr[i];
        }
    }
    return maxi;
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
    int res=largest_element(arr,n);
    cout<<"the largest element in the array is:"<<res;
    return 0;
}
