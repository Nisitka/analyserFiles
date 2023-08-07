#ifndef GUI_H
#define GUI_H

#include <QWidget>

namespace Ui {
class GUI;
}

class GUI : public QWidget
{
    Q_OBJECT

signals:
    // Запуск анализатора
    void emitRunAnalyser(const QString& dir, int type);

public slots:
    // Обновить значение прогресса
    void updateValProgress(int percent); // в %

public:
    explicit GUI(QWidget *parent = nullptr);
    ~GUI();

private slots:
    // Установить путь директории через стандартную опцию
    void setDirFiles();

    // Начинаем анализировать
    void runAnalyser();

private:
    Ui::GUI *ui;
};

#endif // GUI_H
