#ifndef OFFER3_SIMNUM
#define OFFER3_SIMNUM

#endif

#include <iostream>

bool duplicate(int numbers[], int length, int* duplication)
{
    if(length<=0)
    {
        return false;
    }
    for(int i = 0; i<length; i++)
    {
        if(numbers[i]<0 || numbers[i]>=length)
            return false;
    }                                               //前面先对题目中给出的条件作出一个判断，判断是否满足条件。如果满足再继续
    for(int i = 0; i<length; i++)
    {
        while(numbers[i] != i)
        {
            if(numbers[i] == numbers[numbers[i]])
            {
                *duplication = numbers[i];
                return true;
            }
            else
            {
                int temp = numbers[i];
                numbers[i] = numbers[temp];
                numbers[temp]  = temp;
            }
        }
    }
    return false;
}

bool contains(const int array[], int length, int number)
{
    for(int i=0;i<length; i++)
    {
        if(array[i] == number)
            return true;
    }
    return false;
}


void test(char* testname, int numbers[], int lengthNumbers, int expected[], int expectedExpected, bool validArgument)
{
    printf("%s begins ", testname);

    int duplication;
    bool validInput = duplicate(numbers, lengthNumbers, &duplication);

    if(validArgument == validInput)
    {
        if(validInput)
        {
            if(contains(expected,expectedExpected,duplication))
                printf("passed.\n");
            else
                printf("failed.\n");
        }
        else
            printf("passed.\n");
    }
    else
        printf("failed.\n");
}

void test1()
{
    int numbers[] = {2,1,3,1,4};
    int duplications[] = {1};
    test("test1", numbers, sizeof(numbers) / sizeof(int), duplications, sizeof(duplications)/sizeof(int), true);

}

//int main()
//{
//    test1();
//    return 1;
//}

// 题目二


int countRange(const int* numbers, int length, int start, int end)
{
    if(numbers == nullptr)
        return 0;
    int count = 0;
    for(int i=0; i<length; i++)
    {
        if(numbers[i]>=start && numbers[i]<=end)
            count++;
    }
    return count;
}
int getDuplication(const int* numbers, int length)
{
    if(numbers == nullptr || length <= 0)
        return -1;
    int start = 1;
    int end = length - 1;

    while(end>=start)
    {
        int middle = ((end - start)>>1)+start;
        int count = countRange(numbers, length, start, middle);
        if (end == start)
        {
            if(count>1)
                return start;
            else
                break;
        }
        if(count>(middle-start+1))
            end = middle;
        else
            start = middle+1;
    }
    return -1;
}
int main()
{
    int num[] ={2,3,5,4,2,6,7};
    int length = 8;

    int temp = getDuplication(num, length);

    std::cout<<temp;

    return 0;
}