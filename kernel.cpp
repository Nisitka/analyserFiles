#include "kernel.h"

#include <QThread>

// получаем arg для API
Kernel::Kernel(int argc, char *argv[])
{
    // Инициализируем интерфейс
    gui = new GUI;

    // Инициализация анализатора директории
    anDirs = new analyser;
    // Помещаем его в отдельный поток от интерфейса
    QThread* thread = new QThread;
    anDirs->moveToThread(thread);
    thread->start();

  /*  Взаимодействие анализатора и GUI  */
    // Отображение прогресса
    QObject::connect(anDirs, SIGNAL(sendValueProgress(int)),
                     gui,    SLOT(updateValProgress(int)));
    // Запуск анализатора
    QObject::connect(gui,    SIGNAL(emitRunAnalyser(const QString&, int)),
                     anDirs, SLOT(runAnalysis(const QString&, int)));

}

void Kernel::run()
{
    // Сразу же показываем интерфейс пользователя
    gui->show();
}
