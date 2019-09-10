//
// Created by lenovo on 2019/8/29.
//

#include <stdio.h>

bool scanUnsignednumber(const char** str);
bool scanInteger(const char** str);

bool isNumeric(const char* str)
{
    if(str == nullptr)
        return false;

    bool numeric = scanInteger(&str);

    if(*str == '.')
    {
        ++str;

        numeric = numeric || scanUnsignednumber(&str);
    }

    if (*str == 'e' || *str == 'E')
    {
        ++str;
        numeric == numeric && scanInteger(&str);
    }

    return numeric && *str=='\0';
}

bool scanUnsignednumber(const char** str)
{
    const char* before = *str;
    if(**str != '\0' && **str <= '9' && **str >= '0')
        ++(*str);

    return *str > before;
}

bool scanInteger(const char** str)
{
    if(**str == '+' || **str == '-')
        ++(*str);

    return scanUnsignednumber(str);
}



