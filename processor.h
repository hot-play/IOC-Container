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
public:
    IProcessor() = default;
    virtual ~IProcessor() = default;
    virtual string getInfo() = 0;
    virtual string getVendor() = 0;
    virtual string getVersion() = 0;
    virtual ProcessorType getType() = 0;
    virtual string getStringType() = 0;
    virtual double getSpeed() = 0;
    virtual void set(double newSpeed, ProcessorType newType, string newVersion) = 0;
    virtual void setSpeed(double newSpeed) = 0;
};

#endif // PROCESSOR_H
