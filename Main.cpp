#include "Car.h"
#include "ScorpioFactory.h"
#include "DefenderFactory.h"
#include <iostream>
#include <vector>
#include <algorithm>
#include <memory> // For std::unique_ptr

int main() {
    // 1. Create Concrete Factories
    ScorpioFactory factory1;
    DefenderFactory factory2;

    // 2. Create Car objects, passing the factory pointers
    // Use std::unique_ptr to manage Car objects automatically.
    std::unique_ptr<Car> car1 = std::make_unique<Car>(&factory1);
    std::unique_ptr<Car> car2 = std::make_unique<Car>(&factory2);

    // 3. Create a collection (std::vector)
    std::vector<std::unique_ptr<Car>> list;
    list.push_back(std::move(car1)); // std::move to transfer ownership
    list.push_back(std::move(car2));

    std::cout << "--- Starting Car Production and Drive Test ---" << std::endl;

    // 4. Drive all cars
    for (const auto& c : list) {
        c->driveCar();
        std::cout << "---------------------------------" << std::endl;
    }

    // When main exits, list's unique_ptrs destroy the Car objects, 
    // and the Car destructors (via unique_ptr) destroy the IEngine objects.
    
    return 0;
}