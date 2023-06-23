#include <QApplication>
//#include <QPushButton>
#include "classCalculator.h"
#include "./ui_calculator.h"

int main(int argc, char *argv[]) {
    QApplication a(argc, argv);
    //CalculatorMainWindow window(nullptr);
    CalculatorMainWindow window(nullptr);
    Ui::MainWindow action;
    action.setupUi(&window);
    window.lineEdit = action.lineEdit;
    window.lineEdit_2 = action.lineEdit_2;
    window.label = action.label;
    window.resize(340, 254);
    window.show();
    return QApplication::exec();
}
