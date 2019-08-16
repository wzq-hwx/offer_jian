// #include <iostream>

// 有待解决的问题是：异常的使用！！！ debug出现问题 注释掉了
#include <exception>
#include <cstdio>

#include "BianryTree.h"



BinaryTreeNode* ConstructCore(int* startPreorder, int* endPreorder, int* startInorder, int* endInorder);

BinaryTreeNode* Construct(int* preorder, int* inorder, int length)
{
    if(preorder == nullptr||inorder == nullptr||length<=0)
        return nullptr;
    return ConstructCore(preorder, preorder + length - 1, inorder, inorder + length -1);
}

BinaryTreeNode* ConstructCore(int* startPreorder, int* endPreorder, int* startInorder, int* endInorder)
{
    //前序遍历的第一个数字是根节点的值
    int rootValue = startPreorder[0];
    BinaryTreeNode* root = new BinaryTreeNode();
    root->m_nValue = rootValue;
    root->m_pLeft = root->m_pRight = nullptr;

    if(startPreorder == endPreorder)
    {
        if(startInorder == endInorder && *startInorder == *startInorder)
            return root;
        //else
          //  throw std::exception("Invalid input.");
    }
    //再中序遍历中找到根节点的值

    int* rootInorder = startInorder;

    while(rootInorder<=endInorder && *rootInorder != rootValue)
        rootInorder ++;

    //if(rootInorder == endInorder && *rootInorder != rootValue )
      //  throw std::exception("Invalid input.");

    int leftlength = rootInorder - startInorder;

    int* leftPerorderEnd = startPreorder + leftlength;

    if(leftlength > 0)
    {
        root->m_pLeft = ConstructCore(startPreorder+1, leftPerorderEnd, startInorder, rootInorder-1);
    }

    if(leftlength < endPreorder - startPreorder)
    {
        root->m_pRight = ConstructCore(leftPerorderEnd+1, endPreorder, rootInorder+1, endInorder);
    }
    return root;
}


void Test(char* testname, int* preorder, int* inorder, int length)
{
    if(testname != nullptr)
        printf("%s begins:\n", testname);

    printf("The preorder sequeue is: ");

    for(int i=0; i< length; i++)
        printf("%d", preorder[i]);
    printf("\n");

    printf("The ineorder sequeue is: ");

    for(int i=0; i< length; i++)
        printf("%d", inorder[i]);
    printf("\n");

    try
    {
      BinaryTreeNode* root = Construct(preorder, inorder, length);
      PrintTree(root);

      DestroyTree(root);
    }
    catch(std::exception& exception)
    {
        printf("Invalid input.\n");
    }
}

void Test1()
{
    const int length = 8;
    int preorder[length] = {1,2,4,7,3,5,6,8};
    int inorder[length] = {4, 7, 2, 1, 5, 3, 8, 6};
    Test("Test1", preorder, inorder, length);
}

void Test2()
{
    const int length = 5;
    int preorder[length] = {1, 2, 3, 4, 5};
    int inorder[length] = {5, 4, 3, 2, 1};

    Test("Test2", preorder, inorder, length);
}




int main() {

    Test1();
    Test2();
    return 0;
}