#include <string>

class MotorVehicle {
public:

    MotorVehicle(std::string MotorVehicle_make, std::string MotorVehicle_fuelType,
    int MotorVehicle_yearOfManufacture, std::string MotorVehicle_color, int MotorVehicle_engineCapacity) {

        make = MotorVehicle_make;
        fuelType = MotorVehicle_fuelType;
        if (MotorVehicle_yearOfManufacture > 0) {
            yearOfManufacture = MotorVehicle_yearOfManufacture;
        }
        color = MotorVehicle_color;
        if (MotorVehicle_engineCapacity > 0) {
            engineCapacity = MotorVehicle_engineCapacity;
        }
    }

    void setMake(std::string newMake) {
        make = newMake;
    }

    std::string getMake() const {
        return make;
    }

    void setFuelType(std::string newFuelType) {
        fuelType = newFuelType;
    }

    std::string getFuelType() const {
        return fuelType;
    }

    void setYearOfManufacture(int newYearOfManufactor) {
        if (newYearOfManufactor > 0) {
            yearOfManufacture = newYearOfManufactor;
        }
    }

    int getYearOfManufacture() const {
        return yearOfManufacture;
    }

    void setColor(std::string newColor) {
        color = newColor;
    }

    std::string getColor() const {
        return color;
    }

    void setEngineCapacity (int newEngineCapacity) {
        if (newEngineCapacity > 0) {
            engineCapacity = newEngineCapacity;
        }
    }

    int getEngineCapacity() const {
        return engineCapacity;
    }

    

private:
    std::string make;
    std::string fuelType;
    int yearOfManufacture{0};
    std::string color;
    int engineCapacity{0};
};