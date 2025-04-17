#include <iostream>
using namespace std;

void markRow(int matrix[][100], int row, int cols) {
    for (int j = 0; j < cols; j++) {
        if (matrix[row][j] != 0)
            matrix[row][j] = -1;
    }
}

void markCol(int matrix[][100], int col, int rows) {
    for (int i = 0; i < rows; i++) {
        if (matrix[i][col] != 0)
            matrix[i][col] = -1;
    }
}

void setZeroes(int matrix[][100], int rows, int cols) {
    // Step 1: Mark rows and cols where 0 is found
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            if (matrix[i][j] == 0) {
                markRow(matrix, i, cols);
                markCol(matrix, j, rows);
            }
        }
    }

    // Step 2: Change all -1 to 0
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            if (matrix[i][j] == -1)
                matrix[i][j] = 0;
        }
    }
}

int main() {
    int matrix[100][100];
    int rows, cols;

    cout << "Enter rows and columns: ";
    cin >> rows >> cols;

    cout << "Enter the matrix:\n";
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            cin >> matrix[i][j];
        }
    }

    setZeroes(matrix, rows, cols);

    cout << "Matrix after setting zeroes:\n";
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            cout << matrix[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}
