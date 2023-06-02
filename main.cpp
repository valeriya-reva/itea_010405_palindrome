#include "checkpalindrome.h"

#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    CheckPalindrome w;
    w.show();
    return a.exec();
}
