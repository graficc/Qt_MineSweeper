#ifndef DIALOG_H
#define DIALOG_H

#include <QDialog>
#include <QLabel>
#include <QLineEdit>
#include <QPushButton>
#include <QGridLayout>
#include <QString>

#include <mainwindow.h>
class Dialog;
class Dialog : public QDialog
{
    Q_OBJECT

public:
    Dialog(QWidget *parent = 0);
    ~Dialog();
    int ROW,COL,BOOMNUM;
    bool IsReal;    //雷区是否合理标志

private:
    QLabel *label1,*label2,*label3;
    QLineEdit * lineEdit1,*lineEdit2,*lineEdit3;
    QPushButton *button;
private slots:
    void getRowCol();   //得到行数、列数、雷数，判断是否合理
};


#endif // DIALOG_H
