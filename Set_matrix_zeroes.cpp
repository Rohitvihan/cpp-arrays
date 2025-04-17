#include<bits/stdc++.h>
using namespace std;
void markRow(vector<vector<int>> &matrix, int row, int m) {
    for (int j = 0; j < m; j++) {
        if (matrix[row][j] != 0) {
            matrix[row][j] = -1; // Mark
        }
    }
}

void markCol(vector<vector<int>> &matrix, int col, int n) {
    for (int i = 0; i < n; i++) {
        if (matrix[i][col] != 0) {
            matrix[i][col] = -1; // Mark
        }
    }
}

void setZeroes(vector<vector<int>> &matrix) {
    int n = matrix.size();        // rows
    int m = matrix[0].size();     // cols

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            if (matrix[i][j] == 0) {
                markRow(matrix, i, m);
                markCol(matrix, j, n);
            }
        }
    }

    // Convert all -1 to 0
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            if (matrix[i][j] == -1) {
                matrix[i][j] = 0;
            }
        }
    }
}

// Sample main for testing
int main() {
    vector<vector<int>> mat = {
        {1, 1, 0},
        {1, 0, 0},
        {1, 1, 1}
    };

    setZeroes(mat);

    cout << "Modified matrix:\n";
    for (auto &row : mat) {
        for (int val : row) {
            cout << val << " ";
        }
        cout << endl;
    }

    return 0;
}
