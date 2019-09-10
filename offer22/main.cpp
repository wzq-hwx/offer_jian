#include <iostream>
#include <cstdio>
#include "..\Utilities\List.h"


ListNode* FindKthToTail(ListNode* pListHead, unsigned int k)
{
    //首先对输入进行检测
    if(pListHead == nullptr || k == 0)
        return nullptr;

    //输入符合要求之后开始找倒数第k个值
    //定义两个指针
    ListNode* pAhead = pListHead;
    ListNode* pBehind = nullptr;

    for(int i = 0; i < k-1; i++ )
    {

        if(pAhead->m_pNext != nullptr)
            pAhead = pAhead->m_pNext;
        else
            return nullptr;
    }

    pBehind = pListHead;

    while(pAhead->m_pNext != nullptr)
    {
        pAhead = pAhead->m_pNext;
        pBehind = pBehind->m_pNext;
    }

    return pBehind;
}

void test1()
{
    printf("=========Test1 begins:=========");
    ListNode* pNode1 = CreateListNode(1);
    ListNode* pNode2 = CreateListNode(2);
    ListNode* pNode3 = CreateListNode(3);
    ListNode* pNode4 = CreateListNode(4);
    ListNode* pNode5 = CreateListNode(5);


    ConnectListNodes(pNode1, pNode2);
    ConnectListNodes(pNode2, pNode3);
    ConnectListNodes(pNode3, pNode4);
    ConnectListNodes(pNode4, pNode5);

    printf("expected result: 4.\n");
    ListNode* pNode = FindKthToTail(pNode1, 2);
    PrintListNode(pNode);

    DestroyList(pNode1);

}




int main()
{
    test1();
    return 0;
}