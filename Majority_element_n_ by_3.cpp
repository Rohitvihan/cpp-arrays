#include<bits/stdc++.h>
using namespace std;
void majority_element(int arr[],int n)
{
    map<int,int> hashing;
    for(int i=0;i<n;i++)
    {
        hashing[arr[i]]+=1;
    }
    cout<<"the element is:";
    for(auto it:hashing)
    {
        if(it.second>n/3)
        {
            cout<<it.first<<" ";
        }
    }
}
int main()
{
    int n;
    cout<<"enter the size of array:";
    cin>>n;
    int arr[n];
    cout<<"enter the elements:";
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    majority_element(arr,n);
    return 0;
}
