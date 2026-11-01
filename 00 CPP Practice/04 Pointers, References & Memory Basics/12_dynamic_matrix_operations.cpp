/* Question 12: Dynamic 2D Matrix Operations
Create a dynamically allocated 2D matrix using int**.
- Ask the user for the number of rows and columns.
- Allocate memory dynamically.
- Populate the matrix with user input.
- Calculate the sum of each row.
- Calculate the sum of each column.
- Calculate the sum of both diagonals (for square matrices).
- Display the matrix.
- Release all allocated memory correctly.
*/

#include <iostream>

void inputMatrix(int** matrix, int rows, int cols) {
    for (int i = 0; i < rows; i++) {
        matrix[i] = new int[cols]{};

        for (int j = 0; j < cols; j++) {
            std::cout << "Enter element at [" << i << "][" << j << "]: ";
            std::cin >> *(*(matrix + i) + j);
        }
    }
}

void printMatrix(int** matrix, int rows, int cols) {
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            std::cout << *(*(matrix + i) + j) << " ";
        }
        std::cout << "\n";
    }
}

void sumRowsCols(int** matrix, int rows, int cols) {
    std::cout << "\nSum of each row:-\n";

    for (int i = 0; i < rows; i++) {
        int sumRow{};

        for (int j = 0; j < cols; j++) {
            sumRow += *(*(matrix + i) + j);
        }
        std::cout << "Sum of row " << i << ": " << sumRow << "\n";
    }

    std::cout << "\nSum of each column:-\n";

    for (int i = 0; i < cols; i++) {
        int sumCol{};

        for (int j = 0; j < rows; j++) {
            sumCol += *(*(matrix + j) + i);
        }
        std::cout << "Sum of column " << i << ": " << sumCol << "\n";
    }
}

void sumOfDiagonals(int** matrix, int rows, int cols) {
    int sumDiagonal{};
    int sumAntiDiagonal{};

    for (int i = 0; i < rows; i++) {
        sumDiagonal += *(*(matrix + i) + i);
        sumAntiDiagonal += *(*(matrix + i) + (cols - 1 - i));
    }

    std::cout << "\nSum of principal diagonal: " << sumDiagonal << "\n";
    std::cout << "Sum of anti diagonal: " << sumAntiDiagonal << "\n";
}

int main() {
    int rows{}, cols{};

    std::cout << "Enter number of rows: ";
    if (!(std::cin >> rows) || rows <= 0) {
        std::cout << "\nInvalid number of rows. Enter a number greater than 0.\n";
        return 1;
    }

    std::cout << "Enter number of cols: ";
    if (!(std::cin >> cols) || cols <= 0) {
        std::cout << "\nInvalid number of columns. Enter a number greater than 0.\n";
        return 1;
    }

    int** matrix = new int*[rows]{};

    inputMatrix(matrix, rows, cols);

    std::cout << "\nMatrix:-\n";
    printMatrix(matrix, rows, cols);

    sumRowsCols(matrix, rows, cols);

    if (rows == cols) {
        std::cout << "\nIt is a square matrix";
        sumOfDiagonals(matrix, rows, cols);
    }
    else {
        std::cout << "\nIt is not a square matrix" << "\n";
    }

    for (int i = 0; i < rows; i++) {
        delete[] matrix[i];
    }
    delete[] matrix;
    matrix = nullptr;

    return 0;
}
