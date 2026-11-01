/* Question 14: Repeat Input Until Zero
Repeatedly ask the user to enter a number until they enter 0 to quit.
*/

#include <iostream>

int main() {
    int num;

    do {
        std::cout << "Enter the number: ";
        std::cin >> num;
    } while (num != 0);

    return 0;
}
