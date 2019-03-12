#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QKeyEvent>
#include <string>

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
    void on_pushButton_clicked();
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
    void keyPressEvent(QKeyEvent *event);
private:
    Ui::MainWindow *ui;
    std::string m_currentNumber;
    enum {PLUS, MULT, ADD, SUB} m_op = PLUS;
};

#endif // MAINWINDOW_H
