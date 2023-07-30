#ifndef KERNEL_H
#define KERNEL_H

#include <QObject>

class Kernel
{
public:
    Kernel(int argc, char *argv[]);

    // запуск приложения
    void run();

private:
};

#endif // KERNEL_H
