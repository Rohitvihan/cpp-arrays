#include <bits/stdc++.h>
using namespace std;
void left_rotate_arry_by_d_places(int arr[],int n,int d)
{
    d=d%n;
    int temp[d];
    for(int i=0;i<d;i++)
    {
        temp[i]=arr[i];
    }
    for(int i=d;i<n;i++)
    {
        arr[i-d]=arr[i];
    }
    int j=0;
    for(int i=n-d;i<n;i++)
    {
        arr[i]=temp[j];
        j++;
    }
}
int main()
{
    int n;
    cout<<"enter the size:";
    cin>>n;
    int d;
    cout<<"enter the no of places to get shifted:";
    cin>>d;
    int arr[n];
    cout<<"enter the array elements:";
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    left_rotate_arry_by_d_places(arr,n,d);
    cout<<"the array after left rotate by one's place is:";
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
    return 0;
}
