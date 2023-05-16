#include <iostream>

using namespace std;

int main() {
    
    const int baseSalary = 200;
    const double salesRate1 = 0.03;
    const double salesRate2 = 0.05;
    const double salesRate3 = 0.08;
    const int bonus = 200;

 
    int sales1, sales2, sales3;

  
    cout << "Enter sales for manager 1: $";
    cin >> sales1;
    cout << "Enter sales for manager 2: $";
    cin >> sales2;
    cout << "Enter sales for manager 3: $";
    cin >> sales3;

   
    double salary1 = baseSalary + (sales1 < 500 ? sales1 * salesRate1 : (sales1 < 1000 ? sales1 * salesRate2 : sales1 * salesRate3));
    double salary2 = baseSalary + (sales2 < 500 ? sales2 * salesRate1 : (sales2 < 1000 ? sales2 * salesRate2 : sales2 * salesRate3));
    double salary3 = baseSalary + (sales3 < 500 ? sales3 * salesRate1 : (sales3 < 1000 ? sales3 * salesRate2 : sales3 * salesRate3));

    int bestManager = 1;

    if (salary2 > salary1 && salary2 > salary3) {
        bestManager = 2;
    }
    else if (salary3 > salary1 && salary3 > salary2) {
        bestManager = 3;
    }


    switch (bestManager) {
    case 1:
        salary1 += bonus;
        break;
    case 2:
        salary2 += bonus;
        break;
    case 3:
        salary3 += bonus;
        break;
    }


    cout << "Salary for manager 1: $" << salary1 << endl;
    cout << "Salary for manager 2: $" << salary2 << endl;
    cout << "Salary for manager 3: $" << salary3 << endl;
    cout << "Best manager: " << bestManager << endl;

    return 0;
}
