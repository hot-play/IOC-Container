#include "amdprocessor.h"

string AmdProcessor::getInfo() {
    return "Processor AMD version: " + version + ", type:  " + getStringType() + ", speed: " + to_string(speed);
}

string AmdProcessor::getVendor() {
    return "Amd";
}

string AmdProcessor::getVersion() {
    return version;
}

ProcessorType AmdProcessor::getType() {
    return type;
}

string AmdProcessor::getStringType() {
    if (type == ProcessorType::x86) {
        return "x86";
    }
    if (type == ProcessorType::x64) {
        return "x64";
    }
    throw std::runtime_error("Processor type is not valid");
}

double AmdProcessor::getSpeed() {
    return speed;
}

void AmdProcessor::set(double newSpeed, ProcessorType newType, string newVersion) {
    speed = newSpeed;
    type = newType;
    version = newVersion;
}

void AmdProcessor::setSpeed(double newSpeed) {
    speed = newSpeed;
}
