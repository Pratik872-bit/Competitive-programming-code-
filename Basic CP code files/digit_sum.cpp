//code two calculate the sum of first and last digit of the number
#include <iostream>
using namespace std;

int main() {
    int T;
    cin >> T;

    while (T--) {
        int N;
        cin >> N;

        int last_digit = N % 10;  // Extract the last digit

        int first_digit = N;      // Copy N to find the first digit
        while (first_digit >= 10) {
            first_digit /= 10;      // Keep dividing by 10 until only the first digit is left
        }

        cout << first_digit + last_digit << endl; // Print the sum for each test case
    }

    return 0;
}