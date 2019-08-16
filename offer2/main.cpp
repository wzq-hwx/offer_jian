//《设计一个只能生成一个实例的类》、设计模式、适用于多线程 C#
// 1.由于只能生成一个实例所以构造函数要是‘私有的’
// 2.可以定义一个静态的实例，在需要的时候创建。
// C#先不写


#ifndef OFFER2_SIGLETION
#define OFFER2_SIGLETION
#include <iostream>

//单线程实现
class Singleten1
{
private Singleten1(){}

private Singleten1 instance = null;

public:
    static Singleten1 Instance
    {
        get
        {

        }
    }
};



#endif




int main()
{
    std::cout << "Hello, World!" << std::endl;
    return 0;
}