#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    connect(ui->btn_num9, &QPushButton::clicked, this, &MainWindow::on_pushButton_clicked);
    // connect(ui->MainWindow, &QEvent::KeyPress, this, &MainWindow::keyPressEvent2);

}
void MainWindow::keyPressEvent(QKeyEvent *event) {
    if( event->key() == Qt::Key_0 ) {
        m_currentNumber += "0";
    }
    if( event->key() == Qt::Key_1 ) {
        m_currentNumber += "1";
    }
    if( event->key() == Qt::Key_2 ) {
        m_currentNumber += "2";
    }
    if( event->key() == Qt::Key_3 ) {
        m_currentNumber += "3";
    }
    if( event->key() == Qt::Key_4 ) {
        m_currentNumber += "4";
    }
    if( event->key() == Qt::Key_5 ) {
        m_currentNumber += "5";
    }
    if( event->key() == Qt::Key_6 ) {
        m_currentNumber += "6";
    }
    if( event->key() == Qt::Key_7 ) {
        m_currentNumber += "7";
    }
    if( event->key() == Qt::Key_8 ) {
        m_currentNumber += "8";
    }
    if( event->key() == Qt::Key_9 ) {
        m_currentNumber += "9";
        // ui->textEdit->setText(ui->textEdit->toPlainText() + "9");
    }
    ui->textEdit->setText(m_currentNumber.c_str());
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_pushButton_clicked()
{
    printf("%s...\n", __FUNCTION__);

}

void MainWindow::on_btn_num9_clicked()
{

   printf("hello\n");
}

void MainWindow::on_btn_num0_clicked()
{
   printf("hello\n");
}

void MainWindow::on_btn_num1_clicked()
{

}

void MainWindow::on_btn_num2_clicked()
{

}

void MainWindow::on_btn_num3_clicked()
{

}

void MainWindow::on_btn_num6_clicked()
{

}

void MainWindow::on_btn_num5_clicked()
{

}

void MainWindow::on_btn_num4_clicked()
{

}

void MainWindow::on_btn_num7_clicked()
{

}

void MainWindow::on_btn_num8_clicked()
{

}
