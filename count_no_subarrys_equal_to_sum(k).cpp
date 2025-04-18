#include<bits/stdc++.h>
using namespace std;
int count_subarry_equal_to_sum(int arr[], int n, int k) {
    int count = 0;

    for (int i = 0; i < n; i++) {
        int sum = 0;

        for (int j = i; j < n; j++) {
            sum += arr[j];

            if (sum == k) {
                count++;
            }
        }
    }

    return count;
}
int main()
{
    int n,k=3;
    cout<<"enter the size:";
    cin>>n;
    int arr[n];
    cout<<"enter the array elements:";
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    int res=count_subarry_equal_to_sum(arr,n,k);
    cout<<"The count is:"<<res;
    return 0;
}
