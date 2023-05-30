#ifndef COMPUTER_H
#define COMPUTER_H
#include <processor.h>
#include <memory>

class Computer
{
    std::shared_ptr<IProcessor> processor;
public:
    Computer(std::shared_ptr<IProcessor> newProcessor);
    std::shared_ptr<IProcessor> getProcessor();
    void setProcessor(std::shared_ptr<IProcessor> newProcessor);
};

#endif // COMPUTER_H
