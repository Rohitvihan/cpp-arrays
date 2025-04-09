#include <bits/stdc++.h>
using namespace std;
string two_sum(int target, vector<int>& vec)
{
    sort(vec.begin(), vec.end());
    int left = 0;
    int right = vec.size() - 1;

    while (left < right)
    {
        int sum = vec[left] + vec[right];
        if (sum == target)
        {
            return "YES";
        }
        else if (sum < target)
        {
            left++;
        }
        else
        {
            right--;
        }
    }
    return "NO";
}
int main()
{
    int target = 14, n;
    cout << "Enter the number of elements: ";
    cin >> n;

    vector<int> vec(n);

    cout << "Enter the elements: ";
    for (int i = 0; i < n; i++)
    {
        cin >> vec[i];
    }

    string res = two_sum(target, vec);
    cout << res;

    return 0;
}
