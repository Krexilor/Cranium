/* Question 3: User Information
Ask the user for their name and age, then print a sentence containing both.
*/

#include <string>
#include <iostream>

int main() {
    std::string name;
    int age;

    std::cout << "Enter your name: ";
    std::getline(std::cin, name);

    std::cout << "\nEnter your age: ";
    std::cin >> age;

    std::cout << "Hello, " << name << "! It's nice to know that you're " << age << " years old.\n";

    return 0;
}
