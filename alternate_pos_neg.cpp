#include <iostream>
#include <vector>
using namespace std;

void rearrange(vector<int>& arr) {
    vector<int> pos, neg;
    for (int num : arr)
    {
        if (num >= 0)
            pos.push_back(num);
        else
            neg.push_back(num);
    }
    int n = arr.size();
    int i = 0;
    for (int j = 0; j < n / 2; j++)
    {
        arr[i++] = pos[j];
        arr[i++] = neg[j];
    }
}

int main() {
    int n;
    cout << "Enter array size: ";
    cin >> n;

    vector<int> arr(n);
    cout << "Enter array elements: ";
    for (int i = 0; i < n; i++)
        cin >> arr[i];

    rearrange(arr);

    cout << "Rearranged array: ";
    for (int x : arr)
        cout << x << " ";
    cout << endl;

    return 0;
}
