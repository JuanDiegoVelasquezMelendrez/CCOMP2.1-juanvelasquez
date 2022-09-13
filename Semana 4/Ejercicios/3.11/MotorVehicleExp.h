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

    void enteroACad(int n, char cad[]) {
        //Contar la cantidad de dígitos de n
        int nroDig = 0;
        int aux = n;
        while (aux > 0) {
            aux = aux/10;
            nroDig = nroDig + 1;
        }
        cad[nroDig] = '\0';
        //poner cada uno de los dígitos
        aux = n;
        int pos = nroDig - 1;
        int dig;
        while (pos >= 0) {
            dig = aux%10;
            aux = aux/10;
            cad[pos] = dig + '\0';
            pos = pos - 1;
        }
        
    }

    std::string displayCarDetails() {
        char cad[20];
        char cad2[30];
        enteroACad(yearOfManufacture, cad);
        enteroACad(engineCapacity, cad2);

        std::string theReturn = "\nmake: " + make +"\nfuelType: " + fuelType + "\nyearOfManufacture: " + cad + "\ncolor: " + color + "\nengineCapacity: " + cad2 + "\n";
        return theReturn;
    }

private:
    std::string make;
    std::string fuelType;
    int yearOfManufacture{0};
    std::string color;
    int engineCapacity{0};
};