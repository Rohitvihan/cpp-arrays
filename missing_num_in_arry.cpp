#include <bits/stdc++.h>
using namespace std;

int missing_num(int n, int arr[]) {
    int sum = n * (n + 1) / 2;
    int sum_2 = 0;
    for (int i = 0; i < n - 1; i++) {
        sum_2 += arr[i];
    }
    cout << "The sum with all elements is: " << sum << endl;
    cout << "The sum with missing element is: " << sum_2 << endl;
    return sum - sum_2;
}

int main() {
    int n = 6;
    int arr[] = {1, 2, 4, 5, 6};

    int missing = missing_num(n, arr);
    cout << "The missing number is: " << missing << endl;

    return 0;
}
