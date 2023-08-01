#ifndef KERNEL_H
#define KERNEL_H

#include <QObject>

#include "gui.h"

class Kernel
{
public:
    Kernel(int argc, char *argv[]);

    // запуск приложения
    void run();

private:
    // Интерфейс
    GUI* gui;
};

#endif // KERNEL_H
