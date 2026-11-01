/* Question 12: Display a matrix
Create a 3 × 3 integer matrix, take input for all nine elements,
and display it in a proper row-and-column format using nested loops.
*/

#include <iostream>

int main() {
    int matrix[3][3] = {};

    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            std::cout << "Enter elements at [" << i << "][" << j << "]: ";
            std::cin >> matrix[i][j];
        }
    }

    std::cout << "\nMatrix:\n";
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            std::cout << matrix[i][j] << " ";
        }
        std::cout << "\n";
    }
    std::cout << "\n";

    return 0;
}
