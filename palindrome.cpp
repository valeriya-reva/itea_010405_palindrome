#include "palindrome.h"

bool check_polindrom(QString word) {
    int len = word.length();

    for(int i = 0; i < len / 2; ++i) {
        if(word[i] != word[len-i-1]) {
            return false;
        }
    }

    return true;
}

QString getResultOfcheckPalindrome(QString word) {
    QString result;
    if (check_polindrom(word)) {
       result = "Word is polindrom.";
    } else {
       result = "Word is not polindrom";
    }
    return result;
}
