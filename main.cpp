#include <iostream>

using namespace std;

bool isLeapYear(int year) {
    return (year % 4 == 0 && year % 100 != 0) || (year % 400 == 0);
}

int getDaysInMonth(int month, int year) {
    switch (month) {
    case 1: 
    case 3: 
    case 5: 
    case 7: 
    case 8: 
    case 10: 
    case 12: 
        return 31;
    case 4: 
    case 6: 
    case 9: 
    case 11: 
        return 30;
    case 2: 
        return isLeapYear(year) ? 29 : 28;
    default:
        return 0; 
    }
}

int main() {
    int day1, month1, year1;
    int day2, month2, year2;

   
    cout << "Enter the first date (day month year): ";
    cin >> day1 >> month1 >> year1;

    cout << "Enter the second date (day month year): ";
    cin >> day2 >> month2 >> year2;

    
    int days = 0;

    
    if (year1 < year2 || (year1 == year2 && month1 < month2) || (year1 == year2 && month1 == month2 && day1 < day2)) {
      
        int currYear = year1;
        int currMonth = month1;
        int currDay = day1;

        while (currYear != year2 || currMonth != month2 || currDay != day2) {
            days++;
            currDay++;

            if (currDay > getDaysInMonth(currMonth, currYear)) {
                currDay = 1;
                currMonth++;

                
                if (currMonth > 12) {
                    currMonth = 1;
                    currYear++;
                }
            }
        }
    }
    else {
        cout << "Error: The second date must be after the first date.\n";
        return 0;
    }

    cout << "The number of days between the two dates is: " << days << endl;

    return 0;
}
