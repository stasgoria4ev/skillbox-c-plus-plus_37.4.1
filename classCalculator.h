//
// Created by stas on 23.06.2023.
//
#pragma once

#ifndef SKILLBOX_C_PLUS_PLUS_37_CLASSCALCULATOR_H
#define SKILLBOX_C_PLUS_PLUS_37_CLASSCALCULATOR_H

/*#include <QMainWindow>
#include <QLineEdit>
#include <QLabel>*/
#include <QMainWindow>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>

class CalculatorMainWindow : public QMainWindow {
    Q_OBJECT

public:

    QLineEdit* lineEdit{};
    QLineEdit* lineEdit_2{};
    QLabel* label{};

    explicit CalculatorMainWindow(QWidget *parent);

    static bool Correctly(QLineEdit* anyLineEdit);

public slots:

    void slotPlus();

    void slotMinus();

    void slotMultiply();

    void slotDivide();
};

#endif //SKILLBOX_C_PLUS_PLUS_37_CLASSCALCULATOR_H
