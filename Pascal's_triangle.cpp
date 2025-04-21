#include<bits/stdc++.h>
using namespace std;
void pascal_triangle(int n)
{
    for(int row=0;row<n;row++)
    {
        int val=1;
        for(int col=0;col<=row;col++)
        {
            cout<<val<<" ";
            val=val*(row-col)/(col+1);
        }
        cout<<endl;
    }
}
int main()
{
    int n;
    cout<<"enter the value of n:";
    cin>>n;
    pascal_triangle(n);
    return 0;
}
