#include "processorbuilder.h"

IProcessor * ProcessorBuilder::build(string vender, double speed, ProcessorType type, string version) {
    if (vender == "intel") {
        return new IntelProcessor(speed, type, version);
    }
    if (vender == "amd") {
        return new AmdProcessor(speed, type, version);
    }
    return new IProcessor();
}
