#include<bits/stdc++.h>
using namespace std;
vector<vector<int>> foursum(vector<int> &nums,int target)
{
    int n=nums.size();
    set<vector<int>> fin_ans;
    for(int i=0;i<n;i++)
    {
        for(int j=i+1;j<n;j++)
        {
            set<int> hashset;
            for(int k=j+1;k<n;k++)
            {
                int fourth=target-(nums[i]+nums[j]+nums[k]);
                if(hashset.find(fourth)!=hashset.end())
                {
                    vector<int> ans={nums[i],nums[j],nums[k],fourth};
                    sort(ans.begin(),ans.end());
                    fin_ans.insert(ans);
                }
                hashset.insert(nums[k]);
            }
        }
    }
    vector<vector<int>> f_ans(fin_ans.begin(),fin_ans.end());
    return f_ans;
}
int main()
{
    vector<int> nums={1,0,-1,0,-2,2};
    int target=0;
    vector<vector<int>> res=foursum(nums,target);
    cout<<"the vectors are:";
    for(auto &it:res)
    {
        for(auto &i:it)
        {
            cout<<i<<" ";
        }
        cout<<endl;
    }
    return 0;
}
