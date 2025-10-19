#ifndef DEFENDERFACTORY_H
#define DEFENDERFACTORY_H

#include "IVehicleFactory.h"
#include "DefenderEngine.h"
#include <iostream>

// Note: Removed the Calendar import as it was Java-specific and not used in logic.

class DefenderFactory : public IVehicleFactory {
public:
    IEngine* createEngine() const override {
        std::cout << "Defender ka Engine bana rha hu" << std::endl;
        return new DefenderEngine();
    }
};

#endif // DEFENDERFACTORY_H