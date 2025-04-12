#include <bits/stdc++.h>
using namespace std;

void union_of_arrays(vector<int>& arr1, vector<int>& arr2) {
    int n1 = arr1.size();
    int n2 = arr2.size();
    vector<int> vec_arr;
    int i = 0, j = 0;

    while (i < n1 && j < n2) {
        if (arr1[i] < arr2[j]) {
            if (vec_arr.size()==0 || arr1[i] != vec_arr.back()) {
                vec_arr.push_back(arr1[i]);
            }
            i++;
        } else if (arr2[j] < arr1[i]) {
            if (vec_arr.size()==0 || arr2[j] != vec_arr.back()) {
                vec_arr.push_back(arr2[j]);
            }
            j++;
        } else {
            if (vec_arr.size()==0 || arr1[i] != vec_arr.back()) {
                vec_arr.push_back(arr1[i]);
            }
            i++;
            j++;
        }
    }

    while (i < n1) {
        if (vec_arr.size()==0 || arr1[i] != vec_arr.back()) {
            vec_arr.push_back(arr1[i]);
        }
        i++;
    }

    while (j < n2) {
        if (vec_arr.size()==0 || arr2[j] != vec_arr.back()) {
            vec_arr.push_back(arr2[j]);
        }
        j++;
    }

    cout << "Union of arrays: ";
    for (int val : vec_arr) {
        cout << val << " ";
    }
    cout << endl;
}

int main() {
    vector<int> arr1 = {1, 2, 4, 5, 6};
    vector<int> arr2 = {2, 3, 5, 7};

    sort(arr1.begin(), arr1.end());
    sort(arr2.begin(), arr2.end());

    union_of_arrays(arr1, arr2);

    return 0;
}
