#include <iostream>
#include "CMyString.h"

using namespace std;

void test1()
{
    cout<<"Test1 begins:"<<endl;

    char* text = "hello world";
    CMyString str1(text);
    CMyString str2;
    str2 = str1;                     //测试 “=”

    cout<<"The expected result is:"<<text<<endl;
    str2.print();
    cout<<endl;
}

void test2()
{
    cout<<"Test2 begins:"<<endl;
    char* text = "hello world";
    CMyString str1(text);

    str1 = str1;                     //赋值给自己
    cout<<"The expected result is:"<<text<<endl;
    str1.print();
    cout<<endl;
}

void test3()
{
    cout<<"Test2 begins:"<<endl;
    char* text = "hello world";
    CMyString str1(text);
    CMyString str2, str3;

    str2 = str3 = str1;                     //赋值给自己
    cout<<"The expected result is:"<<text<<text<<endl;
    str3.print();
    str2.print();
    cout<<endl;
}



int main() {
    std::cout << "HaHa" << std::endl;

    test1();
    test2();
    test3();

    return 0;
}