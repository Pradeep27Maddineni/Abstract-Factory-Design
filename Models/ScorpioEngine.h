#ifndef SCORPIOENGINE_H
#define SCORPIOENGINE_H

#include "IEngine.h"
#include <iostream>

class ScorpioEngine : public IEngine {
public:
    void start() const override {
        std::cout << "Scorpio Engine started: Vroom Vroom!" << std::endl;
    }
};

#endif // SCORPIOENGINE_H