/* Question 13: Row sums and column sums
For a 3 × 3 matrix, calculate and print the sum of every row and every column.
Test your solution with this matrix:

int matrix[3][3] = {
    {1, 2, 3},
    {4, 5, 6},
    {7, 8, 9}
}
*/

#include <iostream>

void sumRows(int matrix[3][3]) {
    for (int rows = 0; rows < 3; rows++) {
        int sum = 0;

        for (int cols = 0; cols < 3; cols++) {
            sum += matrix[rows][cols];
        }
        std::cout << "Sum of row " << rows << ": " << sum << std::endl;
    }
}

void sumCols(int matrix[3][3]) {
    for (int cols = 0; cols < 3; cols++) {
        int sum = 0;

        for (int rows = 0; rows < 3; rows++) {
            sum += matrix[rows][cols];
        }
        std::cout << "Sum of column " << cols << ": " << sum << std::endl;
    }
}

int main() {
    int matrix[3][3] = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}
    };

    std::cout << "Sum of every row:\n\n";
    sumRows(matrix);

    std::cout << "\nSum of every column:\n\n";
    sumCols(matrix);

    return 0;
}
