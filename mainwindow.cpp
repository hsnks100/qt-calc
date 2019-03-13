#include "mainwindow.h"
#include "ui_mainwindow.h"

int test = 0;
MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    test = 3;
    ui->setupUi(this);
    connect(ui->btn_num9, &QPushButton::clicked, this, &MainWindow::on_pushButton_clicked);
    // connect(ui->MainWindow, &QEvent::KeyPress, this, &MainWindow::keyPressEvent2);

}
void MainWindow::keyPressEvent(QKeyEvent *event) {
    if(isOperator(event->key())) {
        if(m_op == PLUS) {
            m_acc += std::stod(m_currentNumber);
        }
        if(m_op == MINUS) {
            m_acc -= std::stod(m_currentNumber);
        }
        if(m_op == MULT) {
            m_acc *= std::stod(m_currentNumber);
        }
        if(m_op == DIV) {
            m_acc /= std::stod(m_currentNumber);
        }
        if( event->key() == Qt::Key_Plus) {
            m_op = PLUS;
        }
        if( event->key() == Qt::Key_Minus) {
            m_op = MINUS;
        }
        if( event->key() == Qt::Key_Asterisk) {
            m_op = MULT;
        }
        if( event->key() == Qt::Key_Slash) {
            m_op = DIV;
        }
        if( event->key() == Qt::Key_Return) {
            m_op = RETURN;
        }
        std::string t = std::to_string(m_acc);
        ui->textEdit->setText(t.c_str());
        m_currentNumber = "";
    }
    else if(toNumber(event->key())) {
        if(m_op == RETURN) {
            m_acc = 0.0;
            m_currentNumber = "";
            m_op = PLUS;
        }
        char t = toNumber(event->key());
        m_currentNumber += t;
        ui->textEdit->setText(m_currentNumber.c_str());
    }
    else if(event->key() == Qt::Key_Escape) {
        m_acc = 0.0;
        m_currentNumber = "";
        m_op = PLUS;
        ui->textEdit->setText(m_currentNumber.c_str());
    }
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
