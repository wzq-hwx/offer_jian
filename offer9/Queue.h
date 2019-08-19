//
// Created by wzq on 2019/8/18.
//

#ifndef OFFER9_QUEUE_H
#define OFFER9_QUEUE_H

#pragma once

#include <stack>
#include <exception>

using namespace std;

template <typename T>class CQueue
{
public:
    CQueue(void);
    ~CQueue(void);

    //没有返回值的添加函数
    void appendTail(const T& node);
    //返回值类型为T的删除队头函数
    T deleteHead();


private:
    stack<T> stack1;
    stack<T> stack2;
};

template <typename T>CQueue<T>::CQueue()
{

}

template <typename T>CQueue<T>::~CQueue()
{

}

template <typename T>void CQueue<T>::appendTail(const T& element)
{
    stack1.push(element);
}


template <typename T>T CQueue<T>::deleteHead()
{
    if(stack2.size() <= 0)
    {
        while(stack1.size() >0)
        {

            T& data = stack1.top();
            stack1.pop();
            stack2.push(data);
        }
    }

    if(stack2.size() == 0)
        throw new exception ();

    T head = stack2.top();
    stack2.pop();


    return head;
}





#endif //OFFER9_QUEUE_H
