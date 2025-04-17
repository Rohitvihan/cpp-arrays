#include<bits/stdc++.h>
using namespace std;
int longest_sub_seq(int arr[],int n)
{
    sort(arr,arr+n);
    int sec_small=INT_MIN,cur_count=0,longest=1;
    for(int i=0;i<n;i++)
    {
        if(arr[i]-1==sec_small)
        {
            sec_small=arr[i];
            cur_count+=1;
        }
        else if(arr[i]!=sec_small)
        {
            sec_small=arr[i];
            cur_count=1;
        }
        longest=max(longest,cur_count);
    }
    return longest;
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
    int res=longest_sub_seq(arr,n);
    cout<<"the length is:"<<res;
    return 0;
}
