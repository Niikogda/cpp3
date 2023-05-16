#include <iostream>

using namespace std;

int main() {
    int distanceAB, distanceBC, cargoWeight;
    const int fuelTankCapacity = 300;

    
    cout << "Enter the distance between point A and point B (in km): ";
    cin >> distanceAB;
    cout << "Enter the distance between point B and point C (in km): ";
    cin >> distanceBC;
    cout << "Enter the weight of the cargo (in kg): ";
    cin >> cargoWeight;

    
    int fuelConsumption;
    if (cargoWeight <= 500) {
        fuelConsumption = 1;
    }
    else if (cargoWeight <= 1000) {
        fuelConsumption = 4;
    }
    else if (cargoWeight <= 1500) {
        fuelConsumption = 7;
    }
    else if (cargoWeight <= 2000) {
        fuelConsumption = 9;
    }
    else {
        cout << "The aircraft cannot lift off with cargo weighing more than 2000 kg.\n";
        return 0;
    }

    
    int totalFuelRequired = distanceAB * fuelConsumption + distanceBC * fuelConsumption;

    
    int refuelAmount = totalFuelRequired - fuelTankCapacity;
    if (refuelAmount <= 0) {
        cout << "No refueling is required.\n";
    }
    else {
        cout << "Refuel " << refuelAmount << " liters of fuel at point B.\n";
    }

    return 0;
}
