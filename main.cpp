#include <QApplication>

#include "kernel.h"

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);

    Kernel analyserFiles(argc, argv);
    analyserFiles.run();

    return a.exec();
}
