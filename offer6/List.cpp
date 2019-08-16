//
// Created by lenovo on 2019/8/12.
//

#include "List.h"
#include <stdio.h>
#include <stdlib.h>


ListNode* CreatListNode(const int value)
{
    ListNode* pNode = new ListNode();
    pNode->m_nValue = value;
    pNode->m_pnext = nullptr;

    return pNode;
}

void ConnectListNode(ListNode* pCurrent, ListNode* pnext)
{
    if(pCurrent == nullptr)
    {
        printf("Error to connect two Node.\n");
        exit(1);
    }
    pCurrent->m_pnext = pnext;
}

void PrintListNode(ListNode* pNode)
{
    if(pNode == nullptr)
        PrintListNode(pNode);
    else
        printf("The key in node is %d.\n", pNode->m_nValue);
}

void printList(ListNode* pHead)
{
    printf("PrintList start!.\n");

    ListNode* pNode = pHead;

    while(pNode != nullptr)
    {
        printf("%d\t", pNode->m_nValue);
        pNode = pNode->m_pnext;
    }

    printf("PrintList end!\n");

}

void DestroyList(ListNode* pHead)
{
    ListNode* pNode = pHead;
    while(pNode != nullptr)
    {
        pHead = pHead->m_pnext;
        delete pNode;
        pNode = pHead;
    }
}

void AddToTail(ListNode** pHead, int value)
{
    ListNode* pNew = new ListNode();
    pNew->m_nValue = value;
    pNew->m_pnext = nullptr;

    if(*pHead == nullptr)
    {
        *pHead = pNew;
    }
    else
    {
        ListNode* pNode = *pHead;
        while(pNode->m_pnext != nullptr)
        {
            pNode = pNode->m_pnext;
        }
        pNode->m_pnext = pNew;
    }
}

void RemoveNode(ListNode** pHead, int value)
{
    if(*pHead == nullptr || pHead == nullptr)
        return;

    ListNode* ToBeDelete = nullptr;

    if((*pHead)->m_nValue = value)
    {
       ToBeDelete = *pHead;
       *pHead=(*pHead)->m_pnext;
    }

    else
    {
        ListNode* pNode = *pHead;
        while(pNode->m_pnext!= nullptr && pNode->m_pnext->m_nValue != value)
            pNode = pNode->m_pnext;
        if(pNode->m_pnext != nullptr && pNode->m_pnext->m_nValue == value)
        {
            ToBeDelete = pNode->m_pnext;
            pNode->m_pnext = pNode->m_pnext->m_pnext;
        }
    }

    if(ToBeDelete != nullptr)
    {
        delete ToBeDelete;
        ToBeDelete == nullptr;
    }

}




