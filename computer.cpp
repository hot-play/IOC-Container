#include "computer.h"

Computer::Computer(std::shared_ptr<IProcessor>newProcessor) {
    processor = newProcessor;
}

std::shared_ptr<IProcessor> Computer::getProcessor() {
    return processor;
}

void Computer::setProcessor(std::shared_ptr<IProcessor> newProcessor) {
    processor = newProcessor;
}
