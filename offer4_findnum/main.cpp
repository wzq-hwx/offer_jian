//#include <iostream>
#include <cstdio>

bool findnumber(int* matrix, int raws, int cols, int number)
{
    bool found =false;
    if(matrix != nullptr && raws >0 && cols>0)
    {
        int row = 0;
        int col = cols -1;

        while(row <= raws && col >=0)
        {
            int temp = matrix[row*cols+col];//二维数组在内存中是顺序存储的，一行一行的存。index从0开始
            if(temp == number)
            {
                found = true;
                break;
            }
            else if (temp>number)
                -- col;
            else
                ++ row;
        }
        return found;
    }
}

void Test(char* testname, int* matrix, int rows, int cols, int number,bool expected)
{
    if(testname!= nullptr)
        printf("%s begins: ", testname);
    bool result = findnumber(matrix,rows,cols,number);

    if(expected == result)
        printf("Passed.\n");
    else
        printf("Failed.\n");
}

void Test1()
{
    int matrix[][4]={{1,2,8,9},{2,4,9,12},{4,7,10,13},{6,8,11,15}};
    Test("Test1", (int*)matrix, 4, 4, 7, true);
}





int main()
{
    Test1();
    return 0;
}