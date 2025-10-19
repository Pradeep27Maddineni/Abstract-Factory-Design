#ifndef IENGINE_H
#define IENGINE_H

class IEngine {
public:
    virtual ~IEngine() {}
    virtual void start() const = 0; // Pure virtual function
};

#endif // IENGINE_H