#include <iostream>
using namespace std;
void rotate_matrix(int matrix[][100],int rows,int cols)
{
    int ans[100][100];
    for(int i=0;i<rows;i++)
    {
        for(int j=0;j<cols;j++)
        {
            ans[j][rows-1-i]=matrix[i][j];
        }
    }

    cout<<"the rotated matrix is:";
    for(int i=0;i<rows;i++)
    {
        for(int j=0;j<cols;j++)
        {
            cout<<ans[i][j]<<" ";
        }
        cout<<endl;
    }
}
int main()
{
    int rows,cols;
    cout<<"enter the rows and cols:";
    cin>>rows>>cols;
    int matrix[100][100];
    cout<<"enter the matrix elements:";
    for(int i=0;i<rows;i++)
    {
        for(int j=0;j<cols;j++)
        {
            cin>>matrix[i][j];
        }
    }
    rotate_matrix(matrix,rows,cols);
    return 0;
}
