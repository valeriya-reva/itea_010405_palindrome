#ifndef CHECKPALINDROME_H
#define CHECKPALINDROME_H

#include <QMainWindow>

QT_BEGIN_NAMESPACE
namespace Ui { class CheckPalindrome; }
QT_END_NAMESPACE

class CheckPalindrome : public QMainWindow
{
    Q_OBJECT

public:
    CheckPalindrome(QWidget *parent = nullptr);
    ~CheckPalindrome();

private slots:
    void on_pushButton_clicked();

private:
    Ui::CheckPalindrome *ui;
};
#endif // CHECKPALINDROME_H
