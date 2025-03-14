// Copyright 2022 UNN-IASR
#include "fun.h"
#include "iostream"

unsigned int faStr1(const char *str) {
    bool inWord = false;
    bool hasDigit = false;
    int count = 0;
    while (*str) {
        if(*str != ' ' && inWord == false) {
            inWord = true;
            hasDigit = false;
        }
        if(*str != ' ' && inWord == true) {
            if (*str >= '0' && *str <= '9') {
                hasDigit = true;
            }
        }
        if(*str == ' ' && inWord == true) {
            if (!hasDigit) {
                count++;
            }
            inWord = false;
            hasDigit = false;
        }
        str++;
    }
    // Проверка последнего слова
    if (inWord && !hasDigit) {
        count++;
    }
    return count;
}

unsigned int faStr2(const char *str) {
    return 0;
}

unsigned int faStr3(const char *str) {
    return 0;
}
