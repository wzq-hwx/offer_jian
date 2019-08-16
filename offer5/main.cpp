#include <iostream>
#include <cstdio>
#include <cstring>


void ReplaceBlank(char str[], const int length)
{
    if(str == nullptr && length <= 0)
        return;
    int originalLength = 0;
    int numberOfBlank = 0;

    int i = 0;
    while(str[i] != '\0')
    {
        if(str[i] == ' ')
            numberOfBlank ++;
        originalLength ++;
        i++;
    }

    int newlength = originalLength + numberOfBlank*2;
    if(newlength > length)
        return;

    int indexOfOriginal = originalLength;
    int indexOfNew = newlength;

    while(indexOfOriginal >= 0 && indexOfNew >= 0)
    {
        if(str[indexOfOriginal]==' ')
        {
//            str[indexOfNew --] = '0';
//            str[indexOfNew --] = '2';
//            str[indexOfNew --] = '%';
            str[indexOfNew] = '0';
            str[-- indexOfNew] = '2';
            str[-- indexOfNew] = '%';
            indexOfNew --;
        }
        else
        {
            str[indexOfNew --] = str[indexOfOriginal];
        }

        indexOfOriginal --;
    }
}

void Test(char* testname, char str[], const int length, char expected[])
{
    if(testname != nullptr)
        printf("%s begins: ", testname);

    ReplaceBlank(str, length);

    if(expected == nullptr && expected == nullptr)
        printf("passed.\n");
    if(strcmp(str, expected) == 0)
        printf("passed.\n");
    else
        printf("failed.\n");
}


void test1()
{
    char testname[] = "test1";
    const int length = 25;
    char str[length] = "we are friend";
    char expexted[] = "we%20are%20friend";
    Test(testname, str, length, expexted);
}




int main() {
    test1();
    return 0;
}