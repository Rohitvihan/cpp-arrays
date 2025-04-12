#longest_subarray_with_given_sum_k
#include <bits/stdc++.h>
using namespace std;

void longest_sub(int n, int arr[], int k)
{
    int len = 0;
    for(int i = 0; i < n; i++)
    {
        int sum = 0;
        for(int j = i; j < n; j++)
        {
            sum += arr[j];
            if(sum == k)
            {
                len = max(len, j - i + 1);
            }
        }
    }
    cout << "Length of longest subarray with sum " << k << ": " << len << endl;
}

int main()
{
    int arr[] = {1, 2, 3, 7, 5};
    int n = sizeof(arr) / sizeof(arr[0]);
    int k = 12;

    longest_sub(n, arr, k);

    return 0;
}
