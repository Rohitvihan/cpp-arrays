#include<bits/stdc++.h>
using namespace std;
void fibo(int n,int arr[])
{
    arr[0]=0,arr[1]=1;
    for(int i=2;i<n;i++)
    {
        arr[i]=arr[i-1]+arr[i-2];
    }
    cout<<"the sequence is:";
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
}
int main()
{
    int n;
    cout<<"enter the size of te array:";
    cin>>n;
    int arr[n];
    fibo(n,arr);
    return 0;
}
