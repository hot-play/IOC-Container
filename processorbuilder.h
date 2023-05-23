#ifndef PROCESSORBUILDER_H
#define PROCESSORBUILDER_H
#include <processor.h>
#include <intelprocessor.h>
#include <amdprocessor.h>

class ProcessorBuilder
{
private:
public:
    ProcessorBuilder() = default;
    Processor * build(string vender, double speed, ProcessorType type, string version);
};

#endif // PROCESSORBUILDER_H
