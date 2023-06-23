//
// Created by stas on 23.06.2023.
//

#include "classCalculator.h"
//#include <QMainWindow>
//#include <QtWidgets/QLabel>
//#include <QtWidgets/QLineEdit>

    [[maybe_unused]] QLineEdit* lineEdit = nullptr;
    [[maybe_unused]] QLineEdit* lineEdit_2 = nullptr;
    [[maybe_unused]] QLabel* label = nullptr;

    CalculatorMainWindow::CalculatorMainWindow(QWidget* parent): QMainWindow(parent) {
        parent = nullptr;
    }

    bool CalculatorMainWindow::Correctly(QLineEdit* anyLineEdit) {
        bool good = true;
        for (int i = 0; i < anyLineEdit->text().length(); i++)
            if (anyLineEdit->text()[i] < '0' || anyLineEdit->text()[i] > '9')
                good = false;
        return good;
    }

    void CalculatorMainWindow::slotPlus() {
        if (Correctly(lineEdit_2) && Correctly(lineEdit)) {
            QString text; text.setNum(lineEdit_2->displayText().toInt() + lineEdit->displayText().toInt());
            label->setText(text);
        } else
            label->setText("ERROR");
    }

    void CalculatorMainWindow::slotMinus() {
        if (Correctly(lineEdit_2) && Correctly(lineEdit)) {
            QString text; text.setNum(lineEdit_2->displayText().toInt() - lineEdit->displayText().toInt());
            label->setText(text);
        } else
            label->setText("ERROR");
    }

    void CalculatorMainWindow::slotMultiply() {
        if (Correctly(lineEdit_2) && Correctly(lineEdit)) {
            QString text; text.setNum(lineEdit_2->displayText().toInt() * lineEdit->displayText().toInt());
            label->setText(text);
        } else
            label->setText("ERROR");
    }

    void CalculatorMainWindow::slotDivide() {
        if (lineEdit->displayText() != nullptr && Correctly(lineEdit_2) && Correctly(lineEdit) && lineEdit->displayText() != '0') {
            QString text; text.setNum(lineEdit_2->displayText().toInt() / lineEdit->displayText().toInt());
            label->setText(text);
        } else
            label->setText("ERROR");
    }