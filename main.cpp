#include <QApplication>
#include "Pult.h"
#include "./ui_pult.h"

int main(int argc, char *argv[]) {
    QApplication a(argc, argv);
    PultMainWindow window(nullptr);
    Ui::MainWindow pult;
    pult.setupUi(&window);
    window.lcdNumber1 = pult.lcdNumber;
    window.lcdNumber2 = pult.lcdNumber_2;
    window.resize(240,680);
    window.show();
    return QApplication::exec();
}
