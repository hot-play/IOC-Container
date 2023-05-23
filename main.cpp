#include <QCoreApplication>
#include <processorbuilder.h>
#include <processor.h>
#include <iostream>

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);
    try {
        ProcessorBuilder * builder = new ProcessorBuilder;
        IProcessor * processor;

        cout << "Processor intel: " << endl;
        processor = builder->build("intel", 3800, ProcessorType::x86, "i5");
        cout << processor->getInfo() << endl;

        cout << "Processor amd: " << endl;
        processor = builder->build("amd", 4200, ProcessorType::x64, "r5");
        cout << processor->getInfo() << endl;

        cout << "Incorrect processor: " << endl;
        processor = builder->build("elbrus", 2800, ProcessorType::x64, "baikal");
        cout << processor->getInfo() << endl;

        delete processor;
        delete builder;
    } catch (const std::runtime_error& e) {
        std::cerr << e.what();
    }

    return a.exec();
}
