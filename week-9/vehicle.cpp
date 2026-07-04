// BCS-05-0068/2025
// Sifuna Daniel Granton
// Vehicle management system


#include <iostream>
#include <string>

class Vehicle {
    public:
        std::string brand;
        int yearOfManufacture;

    public: 
        void displayVehicle() {
            std::cout << "Brand: " << brand << std::endl;
            std::cout << "Year of Manufacture: " << yearOfManufacture << std::endl;
        }    
};

class Car : public Vehicle {
    public:
        int numberOfDoors;
        int engineCapacity;

    public:
        void displayCar() {
            displayVehicle();
            std::cout << "Number of Doors: " << numberOfDoors << std::endl;
            std::cout << "Engine Capacity: " << engineCapacity << std::endl;
        }
};

int main() {
    Car car;

    std::cout << "Enter brand: ";
    std::getline(std::cin, car.brand);
    std::cout << "Enter year of manufacture: ";
    std::cin >> car.yearOfManufacture;
    std::cout << "Enter number of doors: ";
    std::cin >> car.numberOfDoors;
    std::cout << "Enter engine capacity: ";
    std::cin >> car.engineCapacity;

    car.displayCar();

    return 0;
}