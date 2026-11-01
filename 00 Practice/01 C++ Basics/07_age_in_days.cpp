/* Question 7: Age in Days
Ask the user for their age in years and estimate how many days they've lived. Assume every year has 365 days.
*/

#include <iostream>

int main() {
    int age = 0, daysLived;

    std::cout << "Enter your age (in years): ";
    std::cin >> age;

    daysLived = age * 365;

    std::cout << "You lived " << daysLived << " days. Assuming every year is 365 days." << std::endl;

    return 0;
}
