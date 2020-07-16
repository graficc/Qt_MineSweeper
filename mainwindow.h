#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include "QPushButton"
#include <QMenu>
#include <QMenuBar>
#include <QAction>
#include <QToolBar>
#include <QTimer>
#include "CMineMap.h"
#include <QMessageBox>
#include "dialog.h"

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

private:
    CMineMap mineMap;
    int offsetx,offsety;    //框架边的空白边
    QTimer *rumtime;

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();
    void paintEvent(QPaintEvent *); //绘制界面

protected:
    void mousePressEvent(QMouseEvent *event);   //鼠标点击事件

private slots:  //所有菜单栏的槽
    void on_actionRestart_triggered();  //重新开始

    void on_actionExit_triggered(); //退出

    void on_actionEasy_triggered(); //初级

    void on_actionIntermediate_triggered(); //中级

    void on_actionAdvanced_triggered(); //高级

    void on_actionUser_Defined_triggered(); //自定义

    void on_actionHow_to_play_triggered();  //How_to_play

    void on_actionAbout_triggered();    //About

    void on_sectime();  //计时

private:
    Ui::MainWindow *ui;
};

#endif // MAINWINDOW_H
