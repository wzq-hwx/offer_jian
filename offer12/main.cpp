//#include <iostream>
#include <cstdio>
#include <stack>
#include <cstring>

using namespace std;

bool hasPathCore(const char* matrix, int rows, int cols, int row, int col, const char* str, int& pathLength, bool* visited);


bool hasPath(const char* matrix, int rows, int cols, const char* str)
{
    if(matrix == nullptr || rows < 1 || str == nullptr)
        return false;
    bool* visited = new bool[rows * cols];
    memset (visited, 0, rows*cols);

    int pathLength = 0;

    //以哪个节点为开始
    for(int row = 0; row<rows; ++row)
    {
        for(int col = 0; col < cols; ++col)
        {
            if(hasPathCore(matrix,rows,cols,row,col,str, pathLength, visited))
            {
                return true;
            }
        }
    }

    delete[] visited;

    return false;
}

bool hasPathCore(const char* matrix, int rows, int cols, int row, int col, const char* str, int& pathLength, bool* visited)
{
    if(str[pathLength] == '\0')
        return true;

    bool haspath = false;
    if(row >= 0 && row < rows && col>=0 && col < cols && matrix[row*cols + col] == str[pathLength] && !visited[row*cols + col])
    {
        ++ pathLength;
        visited[row*cols + col] = true;

        haspath = hasPathCore(matrix, rows, cols, row,  col + 1, str, pathLength, visited) ||
                  hasPathCore(matrix, rows, cols, row,  col - 1, str, pathLength, visited) ||
                  hasPathCore(matrix, rows, cols, row + 1, col, str, pathLength, visited) ||
                  hasPathCore(matrix, rows, cols, row - 1, col, str, pathLength, visited);

        if(!haspath)
        {
            pathLength --;
            visited[row*cols + col] = false;
        }

    }
    return haspath;

}

void Test(const char* testname, const char* matrix, int rows, int cols, const char* str, bool expected)
{
    printf("%s begins: ", testname);
    if(hasPath(matrix, rows, cols, str) == expected)
        printf("test pass.\n");
    else
        printf("test failed.\n");
}


void test1()
{
    const char* matrix = "ABTGCFCSJDEH";
    const char* str = "BFCE";

    Test("Test1", (const char*) matrix, 3, 4, str, true);
}

void test2()
{

    const char* matrix = "ABCESFCSADEE";
    const char* str = "SEE";
    Test("test1", (const char*)matrix, 3, 4, str, true);
}


int main()
{
    test1();
    test2();

    return 0;
}