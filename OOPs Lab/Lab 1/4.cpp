// Activity 0.3.4: Transpose of a Matrix

#include <iostream>
#include <cstdlib>
using namespace std;

int main() {
    int n;
    cout << "Enter the size of the square matrix (NxN): ";
    cin >> n;

    // Allocate memory for matrix and its transpose
    int** matrix = (int**)calloc(n, sizeof(int*));
    int** transpose = (int**)calloc(n, sizeof(int*));
    for (int i = 0; i < n; i++) {
        matrix[i] = (int*)calloc(n, sizeof(int));
        transpose[i] = (int*)calloc(n, sizeof(int));
    }

    // Input matrix values
    cout << "Enter matrix values (row by row):\n";
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cin >> matrix[i][j];
        }
    }

    // Calculate transpose
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            transpose[j][i] = matrix[i][j];
        }
    }

    // Display original matrix
    cout << "Matrix Contents:\n";
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cout << matrix[i][j] << " ";
        }
        cout << "\n";
    }

    // Display transpose
    cout << "\nTranspose:\n";
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cout << transpose[i][j] << " ";
        }
        cout << "\n";
    }

    // Free allocated memory
    for (int i = 0; i < n; i++) {
        free(matrix[i]);
        free(transpose[i]);
    }
    free(matrix);
    free(transpose);

    return 0;
}
