//
// Created by wzq-hwx on 2019/8/16.
//

#ifndef OFFER7_BIANRYTREE_H
#define OFFER7_BIANRYTREE_H


#pragma once

struct BinaryTreeNode
{
    int                            m_nValue;
    BinaryTreeNode*                m_pLeft;
    BinaryTreeNode*                m_pRight;
};

__declspec( dllexport ) BinaryTreeNode* CreatBinaryTreeNode(int value);
__declspec( dllexport ) void ConnectTreeNodes(BinaryTreeNode* pParent, BinaryTreeNode* pLeft, BinaryTreeNode* pRight);
__declspec( dllexport ) void PrintTreeNode(const BinaryTreeNode* pNode);
__declspec( dllexport ) void PrintTree(const BinaryTreeNode* pRoot);
__declspec( dllexport ) void DestroyTree(BinaryTreeNode* pRoot);



#endif //OFFER7_BIANRYTREE_H
