//正则表达


#include <iostream>
#include <cstdio>

bool matchCore(const char* str, const char* pattern);

bool match(const char* str, const char* pattern)
{
    if(str == nullptr || pattern == nullptr)
        return false;

    return matchCore(str, pattern);
}

bool matchCore(const char* str, const char* pattern)
{
    if(*str == '\0' && *pattern == '\0')
        return true;

    if(*str != '\0' && *pattern == '\0')
        return false;

    if(*(pattern + 1) == '*')
    {
        if(*pattern == *str || (*pattern == '.' && *str != '\0'))
            return matchCore(str + 1, pattern + 2) || matchCore(str + 1, pattern) || matchCore(str, pattern + 2);

        else
            return matchCore(str, pattern + 2);
    }

    if (*str == *pattern || (*pattern == '.' && *str != '\0'))
    {
        return matchCore(str + 1, pattern + 1);
    }
}




int main() {
    std::cout << "Hello, World!" << std::endl;
    return 0;
}