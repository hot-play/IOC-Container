#include "processor.h"

string Processor::getInfo() {
    throw std::runtime_error("Processor is not valid");
}

string Processor::getVendor() {
    throw std::runtime_error("Processor is not valid");
}

string Processor::getVersion() {
    throw std::runtime_error("Processor is not valid");
}

ProcessorType Processor::getType() {
    throw std::runtime_error("Processor is not valid");
}

string Processor::getStringType() {
    if (type == ProcessorType::x86) {
        return "x86";
    }
    if (type == ProcessorType::x64) {
        return "x64";
    }
    throw std::runtime_error("Processor is not valid");
}

double Processor::getSpeed() {
    throw std::runtime_error("Processor is not valid");
}

void Processor::setSpeed(double newSpeed) {
    throw std::runtime_error("Processor is not valid");
}
