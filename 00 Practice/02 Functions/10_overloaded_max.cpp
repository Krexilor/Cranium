/* Question 10: Overload a function for different data types
Write overloaded functions named getMax() that return the larger of two integers, two double values, or three integers.
Test all overloads with suitable inputs. Make sure the parameter lists differ
and that each call resolves to the intended function.
*/

#include <iostream>

int getMax(int a, int b) {
    if (a > b) {
        return a;
    }
    else {
        return b;
    }
}

double getMax(double a, double b) {
    if (a > b) {
        return a;
    }
    else {
        return b;
    }
}

int getMax(int a, int b, int c) {
    if (a > b && a >> c) {
        return a;
    }
    else if (b > a && b > c) {
        return b;
    }
    else {
        return c;
    }
}

int main() {
    std::cout << "Larger of two integers: " << getMax(3, 18) << "\n";
    std::cout << "Larger of two doubles: " << getMax(3.0f, 7.0f) << "\n";
    std::cout << "Larger of three integers: " << getMax(3, 5, 34) << "\n";

    return 0;
}
