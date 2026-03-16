#include <iostream>
#include <string>
using namespace std;

class Vehicle {
    protected:
        string make, model;
        int year;
    public:
        Vehicle(string mk, string mo, int y)
            : make(mk), model(mo), year(y) {}
        void Display() {
            cout << "Make  : " << make  << endl;
            cout << "Model : " << model << endl;
            cout << "Year  : " << year  << endl;
        }
};

class Car : public Vehicle {
    protected:
        int doors;
        float fuelEfficiency;
    public:
        Car(string mk, string mo, int y, int d, float fe)
            : Vehicle(mk, mo, y), doors(d), fuelEfficiency(fe) {}
        void Display() {
            Vehicle::Display();
            cout << "Doors           : " << doors          << endl;
            cout << "Fuel Efficiency : " << fuelEfficiency << " mpg" << endl;
        }
};

class ElectricCar : public Car {
    private:
        float batteryLife;
    public:
        ElectricCar(string mk, string mo, int y, int d, float fe, float bl)
            : Car(mk, mo, y, d, fe), batteryLife(bl) {}
        void Display() {
            cout << "/-/-/-/-/-/- Electric Car Stats /-/-/-/-/-/-" << endl;
            Car::Display();
            cout << "Battery Life    : " << batteryLife << " miles" << endl;
            cout << "/-/-/-/-/-/-/-/-/-/-/-/-/-/-/-/-/-/-/-/-/-/-" << endl;
        }
};

int main() {
    ElectricCar EC("Tesla", "Model 3", 2024, 4, 0.0, 358.0);
    EC.Display();
    return 0;
}
