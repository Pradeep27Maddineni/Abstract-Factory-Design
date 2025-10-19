#ifndef DEFENDERENGINE_H
#define DEFENDERENGINE_H

#include "IEngine.h"
#include <iostream>

class DefenderEngine : public IEngine {
public:
    void start() const override {
        std::cout << "Defender Engine started: Roar!" << std::endl;
    }
};

#endif // DEFENDERENGINE_H