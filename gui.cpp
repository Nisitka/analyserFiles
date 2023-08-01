#include "gui.h"
#include "ui_gui.h"

#include <QFileDialog>

GUI::GUI(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::GUI)
{
    ui->setupUi(this);

    //
    this->setWindowTitle("Анализатор файлов");
    ui->workAnalyserProgressBar->hide();

 /* Простой функционал интерфейса */
    // Запуск анализа
    connect(ui->runAnalyserButton, SIGNAL(clicked()),
            this,                  SLOT(runAnalyser()));
    // Усановка пути через базовое окно ОС
    connect(ui->setDirFilesButton, SIGNAL(clicked()),
            this,                  SLOT(setDirFiles()));
}

void GUI::setDirFiles()
{
    // Директория
    QString dir;

    // Открываем стандартное окно и записываем выбранный путь
    dir = QFileDialog::getExistingDirectory();

    // Отображаем путь в поле ввода директории
    ui->dirFilesLineEdit->setText(dir);
}

void GUI::runAnalyser()
{
    // Подготавливаем полоску прогресса
    ui->workAnalyserProgressBar->setValue(0);
    ui->workAnalyserProgressBar->show();
}

GUI::~GUI()
{
    delete ui;
}
