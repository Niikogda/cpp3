#include <iostream>

using namespace std;

int main() {
    int number;
    bool continueInput = true;

    while (continueInput) {
        cout << "Enter a six-digit number (or enter -1 to stop): ";
        cin >> number;

        
        if (number == -1) {
            continueInput = false;
            break;
        }

        
        if (number < 100000 || number > 999999) {
            cout << "Error: The entered number is not six digits long.\n";
            continue;
        }

        
        int digit1 = number / 100000;
        int digit2 = (number / 10000) % 10;
        int digit3 = (number / 1000) % 10;
        int digit4 = (number / 100) % 10;
        int digit5 = (number / 10) % 10;
        int digit6 = number % 10;

        
        if (digit1 + digit2 + digit3 == digit4 + digit5 + digit6) {
            cout << "The number is a lucky number!\n";
        }
        else {
            cout << "The number is not a lucky number.\n";
        }
    }

    cout << "Program ended. Goodbye!\n";
    return 0;
}
