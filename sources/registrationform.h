#ifndef REGISTRATIONFORM_H
#define REGISTRATIONFORM_H

#include <QWidget>

namespace Ui {
class registrationForm;
}

class registrationForm : public QWidget
{
    Q_OBJECT

public:
    explicit registrationForm(QWidget *parent = nullptr);
    ~registrationForm();

signals:
    void loginRequested();

private slots:
    void on_loginButton_clicked();
    void on_buttonBox_accepted();
    void on_buttonBox_rejected();

private:
    Ui::registrationForm *ui;
};

#endif // REGISTRATIONFORM_H
