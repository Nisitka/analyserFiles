#ifndef ANALYSER_H
#define ANALYSER_H

#include <QObject>

class analyser : public QObject
{
    Q_OBJECT

signals:
    // уведомить об прогрессе анализа
    void sendValueProgress(int percent); // в %

public slots:
    // начать анализ файлов
    void runAnalysis(const QString& dir, int type = def); // путь, тип анализа

public:
    analyser();

    // типы анализа
    enum typeAnalysis{def};
};

#endif // ANALYSER_H
