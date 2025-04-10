#include <bits/stdc++.h>
using namespace std;

void sort_arry(int arr[], int n)
{
    int low = 0, mid = 0;
    int high = n - 1;

    while (mid <= high)
    {
        if (arr[mid] == 0)
        {
            swap(arr[mid], arr[low]);
            low++;
            mid++;
        }
        else if (arr[mid] == 1)
        {
            mid++;
        }
        else
        {
            swap(arr[mid], arr[high]);
            high--;
        }
    }
}

int main()
{
    int arr[] = {2, 0, 2, 1, 1, 0};
    int n = sizeof(arr) / sizeof(arr[0]);

    sort_arry(arr, n);

    cout << "Sorted array: ";
    for (int i = 0; i < n; i++)
        cout << arr[i] << " ";
    cout << endl;

    return 0;
}
