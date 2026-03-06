 #include <iostream>
#include <vector>
#include <string>

using namespace std;

int main() {
    int a, b;
    // Read the two positive integers separated by a newline
    cin >> a >> b;

    // Array to store English representations for indices 1 to 9
    string labels[] = {"", "one", "two", "three", "four", "five", "six", "seven", "eight", "nine"};

    // Loop through the inclusive interval [a, b]
    for (int i = a; i <= b; i++) {
        if (i >= 1 && i <= 9) {
            // Print English word for numbers 1 to 9
            cout << labels[i] << endl;
        } else if (i > 9) {
            // Check if the number is even or odd
            if (i % 2 == 0) {
                cout << "even" << endl;
            } else {
                cout << "odd" << endl;
            }
        }
    }

    return 0;
}
