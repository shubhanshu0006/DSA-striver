#include <iostream>
using namespace std;

int main() {
    for (int i = 0; i < 5; i++) {    // Outer loop for rows
        for (int j = 0; j < 5; j++) {    // Inner loop for columns
            cout << "*";    // Print an asterisk
        }
        cout << endl;    // Move to the next line after printing a row
    }

    return 0;    // Return 0 to indicate successful execution
}