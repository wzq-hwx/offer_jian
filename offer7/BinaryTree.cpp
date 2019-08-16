//
// Created by wzq-hwx on 2019/8/16.
//

#include <cstdio>
#include "BianryTree.h"


BinaryTreeNode* CreatBinaryTreeNode(int value)
{
    BinaryTreeNode* pNode = new BinaryTreeNode();
    pNode->m_nValue = value;
    pNode->m_pLeft = nullptr;
    pNode->m_pRight = nullptr;

    return pNode;
}
void ConnectTreeNodes(BinaryTreeNode* pParent, BinaryTreeNode* pLeft, BinaryTreeNode* pRight)
{
    if(pParent != nullptr)
    {
        pParent->m_pLeft = pLeft;
        pParent->m_pRight = pRight;
    }
}
void PrintTreeNode(const BinaryTreeNode* pNode)
{
    if(pNode != nullptr)
    {
        printf("value of this node is: %d\n", pNode->m_nValue);
        if(pNode->m_pLeft != nullptr)
            printf("value of its left chile is: %d\n", pNode->m_pLeft->m_nValue);
        else
            printf("value of its left chile is empty");

        if(pNode->m_pRight != nullptr)
            printf("value of its right chile is: %d\n", pNode->m_pRight->m_nValue);
        else
            printf("value of its right chile is empty");
    }
    else
        printf("this node is nullptr.\n");
    printf("\n");

}
void PrintTree(const BinaryTreeNode* pRoot)
{
    PrintTreeNode(pRoot);
    if(pRoot != nullptr)
    {
        if(pRoot->m_pLeft != nullptr)
            PrintTree(pRoot->m_pLeft);
        if(pRoot->m_pRight != nullptr)
            PrintTree(pRoot->m_pRight);
    }

}
void DestroyTree(BinaryTreeNode* pRoot)
{
    if(pRoot != nullptr)
    {
        BinaryTreeNode* pLeft = pRoot->m_pLeft;
        BinaryTreeNode* pRight = pRoot->m_pRight;

        delete pRoot;
        pRoot = nullptr;

        DestroyTree(pLeft);
        DestroyTree(pRight);

    }
}