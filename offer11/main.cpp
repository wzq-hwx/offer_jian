#include <iostream>
#include <cstdio>
// #include <exception>

int MinInorder(int* numbers, int index1, int index2);

int Min(int* numbers, int length)
{
    if(numbers == nullptr || length <= 0)
        printf("The input is invalid.\n");

    int index1=0, index2 = length-1;

    int indexMid = index1;

    while(numbers[index1] >= numbers[index2])
    {
        if(index2-index1 == 1)
        {
            indexMid = index2;
            break;
        }

        indexMid = (index1 + index2)/2;

        //如果这三个数相等，只能顺序查找eg：【111111001】
        if(numbers[indexMid] == numbers[index2]&&numbers[indexMid] == numbers[index1])
            return MinInorder(numbers, index1, index2);

        //如果mid大于2，那么最小值在mid与2之间
        if(numbers[indexMid] >= numbers[index2])
            index1 = indexMid;

        //如果mid小于2，那么最小值在mid与1之间
        else if(numbers[indexMid] <=index2)
            index2 = indexMid;
    }

    return numbers[indexMid];
}

int MinInorder(int* numbers, int index1, int index2)
{
    int reslut = numbers[index1];
    for(int i = index1+1; i<= index2; i++)
    {
        if(reslut>numbers[i])
            reslut = numbers[i];
    }

    return reslut;
}


int main()
{
    int array[] = {2,2,2,1,2};
    //int array[] = {3,4,5,1,2};
    int length = 5;

    int MinNumber = Min(array,length);

    std::cout<<"The Result is:"<<MinNumber<<std::endl;

    return 1;
}