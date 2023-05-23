#ifndef INTELPROCESSOR_H
#define INTELPROCESSOR_H
#include <processor.h>
#include <iostream>

using namespace std;

class IntelProcessor: public IProcessor
{
public:
    IntelProcessor(double newSpeed, ProcessorType newType, string newVersion);
    string getVendor() override;
    string getInfo() override;
    string getVersion() override;
    ProcessorType getType() override;
    string getStringType() override;
    double getSpeed() override;
    void setSpeed(double newSpeed) override;
};
#endif // INTELPROCESSOR_H
