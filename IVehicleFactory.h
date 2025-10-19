#ifndef IVEHICLEFACTORY_H
#define IVEHICLEFACTORY_H

#include "IEngine.h"

class IVehicleFactory {
public:
    virtual ~IVehicleFactory() {}
    virtual IEngine* createEngine() const = 0; // Pure virtual function, returns a pointer
};

#endif // IVEHICLEFACTORY_H