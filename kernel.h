#ifndef KERNEL_H
#define KERNEL_H

#include <QObject>

#include "gui.h"
#include "analyser.h"

class Kernel
{
public:
    Kernel(int argc, char *argv[]);

    // запуск приложения
    void run();

private:
    // Интерфейс
    GUI* gui;

    // Анализатор директорий
    analyser* anDirs;
};

#endif // KERNEL_H
