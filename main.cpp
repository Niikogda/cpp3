#include <iostream>

using namespace std;

int main() {
    int number;
    cout << "Enter a four-digit number: ";
    cin >> number;

    
    if (number < 1000 || number > 9999) {
        cout << "Error: The entered number is not a four-digit number.\n";
        return 0;
    }

   
    int digit1 = number / 1000;    
    int digit2 = (number / 100) % 10;    
    int digit3 = (number / 10) % 10;    
    int digit4 = number % 10;    


    cout << "Enter the new values for digits 1 and 2: ";
    cin >> digit1 >> digit2;
    cout << "Enter the new values for digits 3 and 4: ";
    cin >> digit3 >> digit4;


    int newNumber = digit1 * 1000 + digit2 * 100 + digit3 * 10 + digit4;

    cout << "The modified number is: " << newNumber << endl;

    return 0;
}
