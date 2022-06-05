//
// Created by gigtorus on 05.06.2022.
//
#pragma once
#ifndef INC_37_3_TV_PULT_H
#define INC_37_3_TV_PULT_H
#include <QMainWindow>
#include <QtWidgets/QLineEdit>
#include <tuple>
#include <string>
#include <QtWidgets/QLCDNumber>

class PultMainWindow : public QMainWindow{
Q_OBJECT
public:
    QLCDNumber* lcdNumber1;
    QLCDNumber* lcdNumber2;
    PultMainWindow(QWidget* parent = nullptr): QMainWindow(parent){}

public slots:
    void Clik_0(){lcdNumber1->display(0);};
    void Clik_1(){lcdNumber1->display(1);};
    void Clik_2(){lcdNumber1->display(2);};
    void Clik_3(){lcdNumber1->display(3);};
    void Clik_4(){lcdNumber1->display(4);};
    void Clik_5(){lcdNumber1->display(5);};
    void Clik_6(){lcdNumber1->display(6);};
    void Clik_7(){lcdNumber1->display(7);};
    void Clik_8(){lcdNumber1->display(8);};
    void Clik_9(){lcdNumber1->display(9);};
    void ClikLeft(){
        if(lcdNumber1->intValue()>0)
            lcdNumber1->display(lcdNumber1->intValue()-1);
        else
            lcdNumber1->display(0);
    };
    void ClikRign(){
        if(lcdNumber1->intValue()<99)
        lcdNumber1->display(lcdNumber1->intValue()+1);
        else
        lcdNumber1->display(99);

    };
    void ClikUp(){
        if(lcdNumber2->intValue()<100)
            lcdNumber2->display(lcdNumber2->intValue()+10);
        else
            lcdNumber2->display(100);

    };
    void ClikDown(){
        if(lcdNumber2->intValue()>10)
            lcdNumber2->display(lcdNumber2->intValue()-10);
        else
            lcdNumber2->display(0);

    };

};
#endif //INC_37_3_TV_PULT_H
