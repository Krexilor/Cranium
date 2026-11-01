/* Question 9: Mini Login System
Store a username and PIN as constants. Ask the user to enter both. Print Access Granted only if both match; otherwise, print Access Denied.
*/

#include <string>
#include <iostream>

int main() {
    const std::string username = "krex";
    const std::string pin = "1213";

    std::string myUser, myPin;

    std::cout << "Enter username: ";
    std::cin >> myUser;

    std::cout << "Enter PIN: ";
    std::cin >> myPin;

    if (myUser == username && myPin == pin) {
        std::cout << "Access Granted" << std::endl;
    }
    else {
        std::cout << "Access Denied" << std::endl;
    }

    return 0;
}
