//
// Created by wzq on 2019/8/9.
//《赋值运算符函数》
// 1.将返回值的类型声明为该类型的引用，并在函数结束前返回实例自身的引用，
// 2.将传入的参数类型声明为常量的引用
// 3.是否释放实例自身已有的内存
// 4.判断传入的实例是否与当前实例相同

//

#ifndef OFFER1_CMYSTRING_H
#define OFFER1_CMYSTRING_H

#include <string.h>
#include <iostream>
using namespace std;
class CMyString
{
public:
    CMyString(char* pData = nullptr);
    CMyString(const CMyString& str);
    ~CMyString(void);
    CMyString& operator = (const CMyString &str); // 1.只有返回一个引用，才能允许连续赋值 2.传入参数是引用，从形参到实参不会调用赋值构造函数。

    void print();                //写这个函数是为了看到class的私有成员


private:
    char*m_pData;

};

CMyString::CMyString(char *pData) //char 构造函数
{
    if(pData == nullptr)
    {
        m_pData = new char[1];
        m_pData[0] = '\0';
    }
    else
    {
        int length = strlen(pData);
        m_pData = new char[length + 1];
        strcpy(m_pData, pData);
    }
}
CMyString::CMyString(const CMyString& str)//CMyString 构造函数
{
    int length = strlen(str.m_pData);
    m_pData = new char[length + 1];
    strcpy(m_pData, str.m_pData);
}


CMyString::~CMyString()
{
    delete[] m_pData;
}

CMyString& CMyString::operator=(const CMyString &str)
{
    if(this==&str)          //判断是否相同
        return *this;

    delete []m_pData;       //释放内存
    m_pData = nullptr;      //置为空

    m_pData = new char[strlen(str.m_pData)+1];//分配内存
    strcpy(m_pData, str.m_pData);

    cout<<"wwwwwwwww"<<this<<endl;
    return *this;
}

void CMyString::print()
{
    cout<<m_pData;
}


#endif //OFFER1_CMYSTRING_H
