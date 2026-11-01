/* Question 2: Swapping Variables Using Pointers
Write a function swapValues() that accepts two integer pointers.
- Take two integers as input.
- Pass their addresses to the function.
- Swap their values without returning anything.
- Display the values before and after swapping.
*/

#include <iostream>

void swapValues(int* first, int* second) {
    int temp = *first;
    
    *first = *second;
    *second = temp;
}

int main() {
    int num1 = 25;
    int num2 = 100;

    std::cout << "Values before swap:-\n";
    std::cout << "Num 1: " << num1 << "\n";
    std::cout << "Num 2: " << num2 << "\n\n";
    
    swapValues(&num1, &num2);
    std::cout << "Values after swap:-\n";
    std::cout << "Num 1: " << num1 << "\n";
    std::cout << "Num 2: " << num2 << "\n";
    
    return 0;
}
