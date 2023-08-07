#include "analyser.h"

#include <QDebug>

analyser::analyser()
{

}

void analyser::runAnalysis(const QString& dir, int type)
{
    qDebug() << dir;

    switch (type)
    {
        // стандартный анализ
        case def:
            for (int i=0; i<100; i++)
            {
                sendValueProgress(i);
            }
        break;
    }
}
