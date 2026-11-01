/* Question 15: Print a Right-Angled Triangle
Ask for the number of rows and print a pattern such as:

*
**
***
****
*****
*/

#include <iostream>

int main() {
    int rows;

    std::cout << "Enter number of rows: ";
    std::cin >> rows;

    if (rows <= 0) {
        std::cout << "Enter a number greater than 0\n";
    }
    else {
        for (int i = 0; i < rows; i++) {
            for (int j = 0; j <= i; j++) {
                std::cout << "* ";
            }
            std::cout << "\n";
        }
    }

    return 0;
}
