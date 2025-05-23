#include <iostream>
#include <vector>
using namespace std;

void rearrange(vector<int>& arr) {
    vector<int> pos, neg;

    for (int num : arr) {
        if (num >= 0)
            pos.push_back(num);
        else
            neg.push_back(num);
    }

    int i = 0, j = 0, k = 0;
    while (i < pos.size() && j < neg.size()) {
        arr[k++] = pos[i++];
        arr[k++] = neg[j++];
    }

    while (i < pos.size()) {
        arr[k++] = pos[i++];
    }

    while (j < neg.size()) {
        arr[k++] = neg[j++];
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
