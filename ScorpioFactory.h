#ifndef SCORPIOFACTORY_H
#define SCORPIOFACTORY_H

#include "IVehicleFactory.h"
#include "ScorpioEngine.h"
#include <iostream>

class ScorpioFactory : public IVehicleFactory {
public:
    IEngine* createEngine() const override {
        std::cout << "Scorpio ka engine bana raha hu" << std::endl;
        return new ScorpioEngine();
    }
};

#endif // SCORPIOFACTORY_H