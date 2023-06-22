//
// Created by stas on 20.06.2023.
//

#ifndef SKILLBOX_C_PLUS_PLUS_37_CALCULATORMAINWINDOW_H
#define SKILLBOX_C_PLUS_PLUS_37_CALCULATORMAINWINDOW_H

#include <QMainWindow>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>

class CalculatorMainWindow : public QMainWindow {
    Q_OBJECT

public:

    QLineEdit* lineEdit = nullptr;
    QLineEdit* lineEdit_2 = nullptr;
    QLabel* label = nullptr;

    explicit CalculatorMainWindow(QWidget* parent = nullptr): QMainWindow(parent) {}

    static bool Correctly(QLineEdit* anyLineEdit) {
        bool good = true;
        for (int i = 0; i < anyLineEdit->text().length(); i++)
            if (anyLineEdit->text()[i] < '0' || anyLineEdit->text()[i] > '9')
                good = false;
        return good;
    }

public slots:

    void slotPlus() {
        if (Correctly(lineEdit_2) && Correctly(lineEdit)) {
            QString text; text.setNum(lineEdit_2->displayText().toInt() + lineEdit->displayText().toInt());
            label->setText(text);
        } else
           label->setText("ERROR");
    };

    void slotMinus() {
        if (Correctly(lineEdit_2) && Correctly(lineEdit)) {
            QString text; text.setNum(lineEdit_2->displayText().toInt() - lineEdit->displayText().toInt());
            label->setText(text);
        } else
            label->setText("ERROR");
    };
    void slotMultiply() {
        if (Correctly(lineEdit_2) && Correctly(lineEdit)) {
            QString text; text.setNum(lineEdit_2->displayText().toInt() * lineEdit->displayText().toInt());
            label->setText(text);
        } else
            label->setText("ERROR");
    };
    void slotDivide() {
        if (lineEdit->displayText() != nullptr && Correctly(lineEdit_2) && Correctly(lineEdit) && lineEdit->displayText() != '0') {
            QString text; text.setNum(lineEdit_2->displayText().toInt() / lineEdit->displayText().toInt());
            label->setText(text);
        } else
            label->setText("ERROR");
    };
};

#endif //SKILLBOX_C_PLUS_PLUS_37_CALCULATORMAINWINDOW_H
