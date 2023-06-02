#include "checkpalindrome.h"
#include "./ui_checkpalindrome.h"
#include "palindrome.h"

CheckPalindrome::CheckPalindrome(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::CheckPalindrome)
{
    ui->setupUi(this);
}

CheckPalindrome::~CheckPalindrome()
{
    delete ui;
}

void CheckPalindrome::on_pushButton_clicked()
{
    QString str = ui->lineEdit->text();
    QString result = getResultOfcheckPalindrome(str);

    ui->label->setText(result);
}
