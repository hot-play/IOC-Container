#ifndef AMDPROCESSOR_H
#define AMDPROCESSOR_H
#include <processor.h>
#include <iostream>

using namespace std;

class AmdProcessor : public IProcessor
{
private:
    string version;
    ProcessorType type;
    double speed;
public:
    AmdProcessor() = default;
    string getInfo() override;
    string getVendor() override;
    string getVersion() override;
    ProcessorType getType() override;
    string getStringType() override;
    double getSpeed() override;
    void set(double newSpeed, ProcessorType newType, string newVersion);
    void setSpeed(double newSpeed) override;
};

#endif // AMDPROCESSOR_H
