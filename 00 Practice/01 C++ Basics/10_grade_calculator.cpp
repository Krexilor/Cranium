/* Question 10: Simple Grade Calculator
Ask for marks out of 100 and display a grade using these rules:
- 90–100: A
- 80–89: B
- 70–79: C
- 60–69: D
- Below 60: F
Reject marks below 0 or above 100.
*/

#include <iostream>

int main() {
    int marks;

    std::cout << "Enter your marks (0-100): ";
    std::cin >> marks;

    if (marks >= 0 && marks <= 100) {
        if (marks >= 90) {
            std::cout << "It's A grade.\n";
        }
        else if (marks >= 80 && marks <= 89) {
            std::cout << "It's B grade.\n";
        }
        else if (marks >= 70 && marks <= 79) {
            std::cout << "It's C grade.\n";
        }
        else if (marks >= 60 && marks <= 69) {
            std::cout << "It's D grade.\n";
        }
        else if (marks < 60) {
            std::cout << "It's F grade.\n";
        }
    }
    else {
        std::cout << "Enter valid marks between 0 and 100.\n" << std::endl;
    }
}
