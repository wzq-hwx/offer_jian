#include <iostream>
using namespace std;

long long FIbonacci(unsigned int n)
{

    long long number_one = 0;
    long long number_two = 1;
    long long result = 0;

    if(n==0)
        return result;
    if(n==1)
        return result=number_two;

    for(unsigned int i = 2; i<=n; ++i)
    {
        result = number_one + number_two;
        number_one = number_two;
        number_two = result;
    }


    return result;
}


int main()
{
    long long b = FIbonacci(2);
    cout<<"The result is:"<<b<<endl;

    return 1;
}