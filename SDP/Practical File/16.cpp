// Write a Matrix class with attributes: row, col, and dynamically created two-dimensional int
// array. Define constructors to allocate memory dynamically for the dimensions supplied.
// Write methods to set, get values of individual matrix elements, display contents of the
// matrix, etc.

#include <iostream>
using namespace std;

class Matrix {
private:
    int row;
    int col;
    int** matrix;

public:
    // Constructor to allocate memory for the matrix
    Matrix(int numRows, int numCols) : row(numRows), col(numCols) {
        // Allocate memory for the matrix
        matrix = new int*[row];
        for (int i = 0; i < row; ++i) {
            matrix[i] = new int[col];
        }
    }

    // Destructor to free allocated memory
    ~Matrix() {
        for (int i = 0; i < row; ++i) {
            delete[] matrix[i];
        }
        delete[] matrix;
    }

    // Method to set the value of an individual element in the matrix
    void setElement(int i, int j, int value) {
        if (i >= 0 && i < row && j >= 0 && j < col) {
            matrix[i][j] = value;
        } else {
            cout << "Invalid indices." << endl;
        }
    }

    // Method to get the value of an individual element in the matrix
    int getElement(int i, int j) const {
        if (i >= 0 && i < row && j >= 0 && j < col) {
            return matrix[i][j];
        } else {
            cout << "Invalid indices." << endl;
            return 0; // Return a default value if indices are invalid
        }
    }

    // Method to display the contents of the matrix
    void displayMatrix() const {
        for (int i = 0; i < row; ++i) {
            for (int j = 0; j < col; ++j) {
                std::cout << matrix[i][j] << " ";
            }
            cout << std::endl;
        }
    }
};

int main() {
    // Example usage of the Matrix class
    int numRows, numCols;
    
    // User input for matrix dimensions
    cout << "Enter the number of rows: ";
    cin >> numRows;
    cout << "Enter the number of columns: ";
    cin >> numCols;

    // Create a Matrix object with the specified dimensions
    Matrix myMatrix(numRows, numCols);

    // Set and display matrix elements
    for (int i = 0; i < numRows; ++i) {
        for (int j = 0; j < numCols; ++j) {
            int value;
            cout << "Enter value for matrix element at position (" << i << ", " << j << "): ";
            cin >> value;
            myMatrix.setElement(i, j, value);
        }
    }

    cout << "\nMatrix contents:\n";
    myMatrix.displayMatrix();

    return 0;
}
