#ifndef PROCESSOR_H
#define PROCESSOR_H
#include <iostream>

using namespace std;

enum ProcessorType
{
    x86,
    x64
};

class IProcessor
{
protected:
    string version;
    ProcessorType type;
    double speed;
public:
    IProcessor() = default;
    virtual string getInfo();
    virtual string getVendor();
    virtual string getVersion();
    virtual ProcessorType getType();
    virtual string getStringType();
    virtual double getSpeed();
    virtual void setSpeed(double newSpeed);
};

#endif // PROCESSOR_H
