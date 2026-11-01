/* Question 15: Matrix transpose
Transpose a 2 × 3 matrix into a separate 3 × 2 matrix. For each original element at [row][col],
store it at [col][row] in the result. Print the transposed matrix.
*/

#include <iostream>

int main() {
    int matrix[2][3] = {
        {1, 2, 3},
        {4, 5, 6}
    };

    int transposed[3][2];

    for (int row = 0; row < 2; row++) {
        for (int col = 0; col < 3; col++) {
            transposed[col][row] = matrix[row][col];
        }
    }

    std::cout << "Original matrix: \n";
    for (const auto& row : matrix) {
        for (auto val : row) {
            std::cout << val << " ";
        }
        std::cout << "\n";
    }

    std::cout << "\nTransposed matrix: \n";
    for (const auto& row : transposed) {
        for (auto val : row) {
            std::cout << val << " ";
        }
        std::cout << "\n";
    }

    return 0;
}
