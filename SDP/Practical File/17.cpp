// 

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
        for (int i = 0; i < row; i++) {
            matrix[i] = new int[col];
        }
    }

    // Destructor to free allocated memory
    ~Matrix() {
        for (int i = 0; i < row; i++) {
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
        for (int i = 0; i < row; i++) {
            for (int j = 0; j < col; j++) {
                cout << matrix[i][j] << " ";
            }
            cout << std::endl;
        }
    }

    static Matrix multiply(const Matrix& mat1, const Matrix& mat2) {
        // Check if multiplication is possible
        if (mat1.col != mat2.row) {
            cerr << "Matrix multiplication is not possible. Invalid dimensions." << endl;
            return Matrix(0, 0);  // Return an empty matrix
        }

        // Create a result matrix with dimensions mat1.row x mat2.col
        static Matrix result(mat1.row, mat2.col);

        // Perform matrix multiplication
        for (int i = 0; i < mat1.row; i++) {
            for (int j = 0; j < mat2.col; j++) {
                int sum = 0;
                for (int k = 0; k < mat1.col; k++) {
                    sum += mat1.matrix[i][k] * mat2.matrix[k][j];
                }
                result.setElement(i, j, sum);
            }
        }
        return result;
    }
};



int main() {
    // Example usage of the Matrix class and multiplication function
    int numRows1, numCols1, numRows2, numCols2;
    numRows1= numCols1= numRows2= numCols2= 2;

    // Create two Matrix objects with the specified dimensions
    Matrix mat1(numRows1, numCols1);
    Matrix mat2(numRows2, numCols2);

    // Set matrix elements (for simplicity, elements are set manually here)
    mat1.setElement(0, 0, 1); mat1.setElement(0, 1, 2);
    mat1.setElement(1, 0, 3); mat1.setElement(1, 1, 4);

    mat2.setElement(0, 0, 5); mat2.setElement(0, 1, 6);
    mat2.setElement(1, 0, 7); mat2.setElement(1, 1, 8);

    // Display matrix contents
    cout << "\nMatrix 1:\n";
    mat1.displayMatrix();

    cout << "\nMatrix 2:\n";
    mat2.displayMatrix();

    // Multiply matrices and display the result
    Matrix result = Matrix::multiply(mat1, mat2);

    cout << "\nMatrix multiplication result:\n";
    result.displayMatrix();

    return 0;
}