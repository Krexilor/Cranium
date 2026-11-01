/* Question 11: Memory Leak Investigation
Consider the following function:
void processData() {
    int* data = new int[100];

    for (int i = 0; i < 100; i++) {
        data[i] = i * 10;
    }
}

Your tasks:
1. Identify the memory management problem.
2. Explain what happens when the function returns.
3. Rewrite the function to fix the problem.
4. Create another function that dynamically allocates an array,
processes it and releases the memory correctly.
*/

#include <iostream>

// The original function leaked memory because it didn't call delete[].
// When it returned, its local pointer went out of scope, but the array
// allocated with new[] remained allocated and inaccessible.
void processData() {
    int* data = new int[100];

    for (int i = 0; i < 100; ++i) {
        data[i] = i * 10;
    }

    delete[] data;
}

void anotherProcessData() {
    const int size = 5;
    int* data = new int[size];

    int sum = 0;
    for (int i = 0; i < size; ++i) {
        data[i] = (i + 1) * 10;
        sum += data[i];
    }

    std::cout << "Sum of second array: " << sum << '\n';

    delete[] data;
}

int main() {
    processData();
    anotherProcessData();

    return 0;
}
