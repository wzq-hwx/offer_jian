//#include <iostream>
#include <cstdio>


int movingCountcore(int threshold, int rows, int cols, int row, int col, bool* visited);
bool check(int threshold, int rows, int cols, int row, int col, bool* visited);
int getDigitSum(int number);   //计算col、row各位上的数字和

int movingCount(int threshold, int rows, int cols)
{
    //输入检查
    if(threshold < 0||rows<=0||cols<=0)
    {
        return 0;
    }
    //visited 初始化
    bool *visited = new bool[rows*cols];
    for(int i = 0; i<rows*cols; i++)
    {
        visited[i] = 0;
    }

    //
    int count = movingCountcore(threshold, rows, cols, 0, 0, visited);

    delete[] visited;

    return count;
}

int movingCountcore(int threshold, int rows, int cols, int row, int col, bool* visited)
{
    int count = 0;
    if(check(threshold, rows, cols, row, col, visited))
    {
        visited[row*cols+col] = true;

        count = 1 + movingCountcore(threshold, rows, cols, row-1, col, visited) +
                movingCountcore(threshold, rows, cols, row+1, col, visited) +
                movingCountcore(threshold, rows, cols, row, col-1, visited) +
                movingCountcore(threshold, rows, cols, row, col+1, visited);

    }
    return count;
}

bool check(int threshold, int rows, int cols, int row, int col, bool* visited)
{
    if (row >= 0 && col >= 0 && row < rows && col < cols && getDigitSum(row) + getDigitSum(col) <= threshold &&
        !visited[row * cols + col])
    {
        return true;
    }
    return false;
}

int getDigitSum(int number)
{
    int sum = 0;
    while(number > 0)
    {
        sum += number%10;
        number = number /10;
    }
    return sum;
}

void test(const char* testname, const int threshold, const int rows, const int cols, const int expected)
{
    if(testname != nullptr)
        printf("%s begins: ", testname);

    int count = movingCount(threshold, rows, cols);

    if(count == expected)
    {
        printf("test pass");
    }
    else
        printf("test failed");

}

void test1()
{
    test("test1", 5, 10, 10, 21);
}




int main()
{
    test1();
    return 0;
}