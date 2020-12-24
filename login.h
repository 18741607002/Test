#ifndef LOGIN_H
#define LOGIN_H

#include <QMainWindow>

namespace Ui {
class Login;
}

class Login : public QMainWindow
{
    Q_OBJECT

public:
    explicit Login(QWidget *parent = 0);
    ~Login();

private slots:

    void on_btn_regin_clicked();

    void on_btn_login_clicked();

    void on_btn_exit_clicked();

private:
    Ui::Login *ui;
};

#endif // LOGIN_H
