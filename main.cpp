#include <iostream>

using namespace std;

int main() {
    int number, maxNumber = INT_MIN;

    cout << "Enter 7 integers:\n";

    for (int i = 1; i <= 7; ++i) {
        cout << "Enter number " << i << ": ";
        cin >> number;

        if (number > maxNumber) {
            maxNumber = number;
        }
    }

    cout << "The maximum number is: " << maxNumber << endl;

    return 0;
}
