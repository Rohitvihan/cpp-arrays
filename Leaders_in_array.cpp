#include<bits/stdc++.h>
using namespace std;
void leaders_arry(int arr[],int n)
{
    vector<int> ans;
    int maxi=INT_MIN;
    for(int i=n-1;i>=0;i--)
    {
        if(arr[i]>maxi)
        {
            ans.push_back(arr[i]);
        }
        maxi=max(maxi,arr[i]);
    }
//    int rev=reverse(ans);
    cout<<"the leaders are:";
    for(int i:ans)
    {
        cout<<i<<" ";
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
    leaders_arry(arr,n);
    return 0;
}
