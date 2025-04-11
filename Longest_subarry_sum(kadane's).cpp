#include <iostream>
#include <climits>
using namespace std;

void longest_subarray_sum(int arr[], int n)
{
    int maxi = INT_MIN;
    int sum = 0;
    int start = 0, ansStart = 0, ansEnd = 0;

    for (int i = 0; i < n; i++)
    {
        if (sum == 0)
        {
            start = i;
        }

        sum = sum + arr[i];

        if (sum > maxi)
        {
            maxi = sum;
            ansStart = start;
            ansEnd = i;
        }

        if (sum < 0)
        {
            sum = 0;
        }
    }

    cout << "Maximum Subarray Sum: " << maxi << endl;
    cout << "Subarray: ";
    for (int i = ansStart; i <= ansEnd; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main()
{
    int arr[] = {-2, -3, 4, -1, -2, 1, 5, -3};
    int n = sizeof(arr) / sizeof(arr[0]);

    longest_subarray_sum(arr, n);

    return 0;
}
