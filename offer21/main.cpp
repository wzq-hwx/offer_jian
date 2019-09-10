#include <iostream>
#include <cstdio>

//bool isOu(const int number);

void JFOB(int *pDate, unsigned int length)
{
    if(pDate == nullptr || length <= 0)
        return;

    int *pBegin = pDate; //shuzu zhong zhijie 指向数值
    int *pEnd = pDate + length - 1;

    while(pBegin < pEnd)
    {
        while(pBegin < pEnd && (*pBegin & 0x1) != 0)
            pBegin ++;

        while(pBegin < pEnd && (*pEnd & 0x1) != 0)
            pEnd --;

        if(pBegin < pEnd)
        {
            int temp = *pBegin;
            *pBegin = *pEnd;
            *pEnd = temp;
        }
    }

}

void PrintArray(int numbers[], int length)
{
    if(length < 0)
        return;

    for(int i = 0; i < length; ++i)
        printf("%d\t", numbers[i]);

    printf("\n");
}

void Test(char* testName, int numbers[], int length)
{
    if(testName != nullptr)
        printf("%s begins:\n", testName);

    int* copy = new int[length];
    for(int i = 0; i < length; ++i)
    {
        copy[i] = numbers[i];
    }

    printf("Test for solution 1:\n");
    PrintArray(numbers, length);
    JFOB(numbers, length);
    PrintArray(numbers, length);

    printf("Test for solution 2:\n");
    PrintArray(copy, length);
    //ReorderOddEven_2(copy, length);
    PrintArray(copy, length);

    delete[] copy;
}
void Test1()
{
    int numbers[] = {1, 2, 3, 4, 5, 6, 7};
    Test("Test1", numbers, sizeof(numbers)/sizeof(int));
}

void Test2()
{
    int numbers[] = {2, 4, 6, 1, 3, 5, 7};
    Test("Test2", numbers, sizeof(numbers)/sizeof(int));
}

int main()
{
    Test1();
    Test2();
    return 0;
}