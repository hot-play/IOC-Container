#ifndef INTELPROCESSOR_H
#define INTELPROCESSOR_H
#include <processor.h>
#include <iostream>

using namespace std;

class IntelProcessor: public IProcessor
{
private:
    string version;
    ProcessorType type;
    double speed;
public:
    IntelProcessor() = default;
    ~IntelProcessor() override;
    string getVendor() override;
    string getInfo() override;
    string getVersion() override;
    ProcessorType getType() override;
    string getStringType() override;
    double getSpeed() override;
    void set(double newSpeed, ProcessorType newType, string newVersion);
    void setSpeed(double newSpeed) override;
};
#endif // INTELPROCESSOR_H
