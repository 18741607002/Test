#include "login.h"
#include "ui_login.h"

Login::Login(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::Login)
{
    ui->setupUi(this);
    ui->Edit_pswd->setEchoMode(QLineEdit::Password);
    ui->Edit_user->setPlaceholderText("输入用户名");
    ui->Edit_pswd->setPlaceholderText("输入密码");
}

Login::~Login()
{
    delete ui;
}


void Login::on_btn_regin_clicked()
{

}

void Login::on_btn_login_clicked()
{

}

void Login::on_btn_exit_clicked()
{

}
