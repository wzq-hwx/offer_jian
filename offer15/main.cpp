#include <iostream>
using namespace std;

int NumberOf1_Solution1(int n)
{
    int count = 0;

    unsigned int flag = 1;

    while(flag)
    {
        if(n & flag)
            count ++;
        flag = flag << 1;
    }
    return count;
}

int NumberOf1_Solution2(int n)
{
    int count = 0;

    while(n)
    {
        ++ count;
        n = (n-1) & n;
    }
    return count;
}


int main()
{
    const int n = 24;
    int count = NumberOf1_Solution2(n);
    // int count = NumberOf1_Solution1(n);
    cout<< "the number of 1 in number " <<n<<" is "<<count<<endl;
    return 0;
}