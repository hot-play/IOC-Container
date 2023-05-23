#include <QCoreApplication>
#include <processorbuilder.h>
#include <processor.h>
#include <iostream>

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);
    try {
        ProcessorBuilder * builder = new ProcessorBuilder;

        cout << "Processor intel: " << endl;
        cout << builder->build("intel", 3800, ProcessorType::x86, "i5")->getInfo() << endl;

        cout << "Processor amd: " << endl;
        cout << builder->build("amd", 4200, ProcessorType::x64, "r5")->getInfo() << endl;

        cout << "Incorrect processor: " << endl;
        cout << builder->build("elbrus", 2800, ProcessorType::x64, "baikal")->getInfo() << endl;

        delete builder;
    } catch (const std::runtime_error& e) {
        std::cerr << e.what();
    }

    return a.exec();
}
