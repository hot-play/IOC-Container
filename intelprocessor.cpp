#include "intelprocessor.h"

IntelProcessor::IntelProcessor(double newSpeed, ProcessorType newType, string newVersion) {
    speed = newSpeed;
    type = newType;
    version = newVersion;
}

string IntelProcessor::getVendor() {
    return "Intel";
}

string IntelProcessor::getInfo() {
    return "Processor Intel version: " + version + ", type:  " + getStringType() + ", speed: " + to_string(speed);
}

string IntelProcessor::getVersion() {
    return version;
}

ProcessorType IntelProcessor::getType() {
    return type;
}

string IntelProcessor::getStringType() {
    if (type == ProcessorType::x86) {
        return "x86";
    }
    if (type == ProcessorType::x64) {
        return "x64";
    }
    throw std::runtime_error("Processor type is not valid");
}

double IntelProcessor::getSpeed() {
    return speed;
}

void IntelProcessor::setSpeed(double newSpeed) {
    speed = newSpeed;
}
