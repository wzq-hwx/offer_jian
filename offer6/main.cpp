//输入一个链表的头节点，从尾到头反过来打印每个节点的值


#include <iostream>
#include <stack>
#include "List.h"


void PrintListIteratively(ListNode* pHead)
{
    std::stack<ListNode*> nodes;

    ListNode* pNode = pHead;

    while(pNode != nullptr)
    {
        nodes.push(pNode);
        pNode=pNode->m_pnext;
    }

    while(!nodes.empty())
    {
        pNode = nodes.top();
        printf("%d\t", pNode->m_nValue);
        nodes.pop();
    }

}

void PrintList_Recursively(ListNode* pHead)
{
    if(pHead != nullptr)
    {
        if(pHead->m_pnext != nullptr)
        {
            PrintList_Recursively(pHead->m_pnext);
        }

        printf("%d\t", pHead->m_nValue);
    }
}

void Test(ListNode* pHead)
{
    printList(pHead);
    PrintListIteratively(pHead);
    printf("\n");
    PrintList_Recursively(pHead);
}

void test1()
{
    printf("Test1 begins: \n");

    ListNode* pNode1 = CreatListNode(1);
    ListNode* pNode2 = CreatListNode(2);
    ListNode* pNode3 = CreatListNode(3);
    ListNode* pNode4 = CreatListNode(4);
    ListNode* pNode5 = CreatListNode(5);

    ConnectListNode(pNode1,pNode2);
    ConnectListNode(pNode2,pNode3);
    ConnectListNode(pNode3,pNode4);
    ConnectListNode(pNode4,pNode5);

    Test(pNode1);

    DestroyList(pNode1);
}




int main()
{
    std::cout << "Hello, World!" << std::endl;
    test1();

    return 0;
}