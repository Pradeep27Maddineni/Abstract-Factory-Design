#ifndef CAR_H
#define CAR_H

#include "IEngine.h"
#include "IVehicleFactory.h"
#include <iostream>
#include <memory> // For std::unique_ptr

class Car {
private:
    std::unique_ptr<IEngine> engine; // Use smart pointer for automatic memory management
    const IVehicleFactory* carFactory; // Factory is passed, not owned by Car

public:
    // Constructor takes a factory reference (or pointer)
    Car(const IVehicleFactory* factory) : carFactory(factory) {}

    // Destructor to ensure any owned resources (handled by unique_ptr) are cleaned up.
    ~Car() = default; 

    void driveCar() {
        // Create the engine using the factory
        engine.reset(carFactory->createEngine());

        // Use the engine
        if (engine) {
            engine->start();
            std::cout << "MIlgyi gaadi, chillll maro" << std::endl;
        } else {
            std::cout << "Error: Could not create engine." << std::endl;
        }
    }
};

#endif // CAR_H