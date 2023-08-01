#include "kernel.h"

// получаем arg для API
Kernel::Kernel(int argc, char *argv[])
{
    // Инициализируем интерфейс
    gui = new GUI;
}

void Kernel::run()
{
    // Сразу же показываем интерфейс пользователя
    gui->show();
}
