/* Question 14: Matrix addition
Create two 2 × 3 matrices. Calculate their element-wise sum into a third matrix and display the result.
Use nested loops rather than writing each addition manually.
*/

#include <iostream>

int main() {
    int matrix1[2][3] = {
        {1, 2, 3},
        {4, 5, 6}
    };

    int matrix2[2][3] = {
        {7, 8, 9},
        {10, 11, 12}
    };

    int matrix3[2][3];

    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 3; j++) {
            matrix3[i][j] = matrix1[i][j] + matrix2[i][j];
        }
    }

    std::cout << "New resultant matrix: \n";
    for (const auto& row : matrix3) {
        for (auto val : row) {
            std::cout << val << " ";
        }
        std::cout << "\n";
    }

    return 0;
}
