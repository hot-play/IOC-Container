#include "processor.h"

string IProcessor::getInfo() {
    throw std::runtime_error("Processor is not valid");
}

string IProcessor::getVendor() {
    throw std::runtime_error("Processor is not valid");
}

string IProcessor::getVersion() {
    throw std::runtime_error("Processor is not valid");
}

ProcessorType IProcessor::getType() {
    throw std::runtime_error("Processor is not valid");
}

string IProcessor::getStringType() {
    throw std::runtime_error("Processor is not valid");
}

double IProcessor::getSpeed() {
    throw std::runtime_error("Processor is not valid");
}

void IProcessor::setSpeed(double newSpeed) {
    throw std::runtime_error("Processor is not valid");
}
