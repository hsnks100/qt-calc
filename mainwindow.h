#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QKeyEvent>
#include <string>
#include <QMessageBox>

namespace Ui {
    class MainWindow;

}

class MainWindow : public QMainWindow
{

    Q_OBJECT
public:
    explicit MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:
    void on_btn_num9_clicked();
    void on_btn_num0_clicked();
    void on_btn_num1_clicked();
    void on_btn_num2_clicked();
    void on_btn_num3_clicked();
    void on_btn_num6_clicked();
    void on_btn_num5_clicked();
    void on_btn_num4_clicked();
    void on_btn_num7_clicked();
    void on_btn_num8_clicked();

protected:
    bool isOperator(int key) {
        if( key == Qt::Key_Plus || key == Qt::Key_Minus || key == Qt::Key_Asterisk || Qt::Key_Slash == key
            || key == Qt::Key_Return) {
            return true;
        }
        else {
            return false;
        }
    }
    char toNumber(int key) {
        switch(key) {
        case Qt::Key_0:
            return '0';
        case Qt::Key_1:
            return '1';
        case Qt::Key_2:
            return '2';
        case Qt::Key_3:
            return '3';
        case Qt::Key_4:
            return '4';
        case Qt::Key_5:
            return '5';
        case Qt::Key_6:
            return '6';
        case Qt::Key_7:
            return '7';
        case Qt::Key_8:
            return '8';
        case Qt::Key_9:
            return '9';
        }
        return 0;
    }
    void keyPressEvent(QKeyEvent *event);
    void warningAlert() {
        QMessageBox msgBox;
        msgBox.setText("Name");
        msgBox.setInformativeText("only keyboard");
        int ret = msgBox.exec();
    }
private:
    Ui::MainWindow *ui;
    std::string m_currentNumber;
    double m_acc = 0.0;
    enum {PLUS, MULT, DIV, MINUS, RETURN} m_op = PLUS;
};

#endif // MAINWINDOW_H
