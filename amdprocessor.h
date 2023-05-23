#ifndef AMDPROCESSOR_H
#define AMDPROCESSOR_H
#include <processor.h>
#include <iostream>

using namespace std;

class AmdProcessor : public IProcessor
{
public:
    AmdProcessor(double newSpeed, ProcessorType newType, string newVersion);
    string getInfo() override;
    string getVendor() override;
    string getVersion() override;
    ProcessorType getType() override;
    string getStringType() override;
    double getSpeed() override;
    void setSpeed(double newSpeed) override;
};

#endif // AMDPROCESSOR_H
