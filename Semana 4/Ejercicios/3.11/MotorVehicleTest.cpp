#include <iostream>
#include "MotorVehicle.h"

using namespace std;

int main() {

    MotorVehicle motorvehicle1{"default", "default", 1, "default", 1};

    cout << "\nenter a new fuel type: ";
    string newFuelType;
    getline (cin,newFuelType);
    cout << "\nchanging the fuel type...";
    motorvehicle1.setFuelType(newFuelType);

    cout << "\nfuel type is changed to " << motorvehicle1.getFuelType();

    cout << "\n\nenter a new engine capacity: ";
    int newEngineCapacity;
    cin >> newEngineCapacity;
    cout << "\nchanging the engine capacity...";
    motorvehicle1.setEngineCapacity(newEngineCapacity);

    cout << "\nengine capacity is changed to " << motorvehicle1.getEngineCapacity();

    cout << "\n\nDisplaying car details..." << "\nmake: " << motorvehicle1.getMake() << "\nfuelType: " << motorvehicle1.getFuelType() <<  "\nyearOfManufacture: " << motorvehicle1.getYearOfManufacture() << "\ncolor: " << motorvehicle1.getColor() << "\nengineCapacity: " << motorvehicle1.getEngineCapacity() << "\n" << endl;

    return 0;
}