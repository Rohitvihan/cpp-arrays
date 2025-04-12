#include <bits/stdc++.h>
using namespace std;

int Max_cons_ones(int arr[], int n) {
    int maxi = 0, count = 0;
    for (int i = 0; i < n; i++) {
        if (arr[i] == 1) {
            count++;
            maxi = max(count, maxi);
        } else {
            count = 0;
        }
    }
    return maxi;
}

int main()
{
    int arr[] = {1, 1, 0, 1, 1, 1, 0, 1, 1};
    int n = sizeof(arr) / sizeof(arr[0]);

    int result = Max_cons_ones(arr, n);
    cout << "Maximum number of consecutive 1s: " << result << endl;

    return 0;
}
