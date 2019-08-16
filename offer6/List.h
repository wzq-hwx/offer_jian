//
// Created by lenovo on 2019/8/12.
//

#ifndef OFFER6_LIST_H
#define OFFER6_LIST_H

struct ListNode
{
    int m_nValue;
    ListNode* m_pnext;
};
__declspec(dllexport) ListNode* CreatListNode(int value);

__declspec(dllexport) void ConnectListNode(ListNode* pCurrent, ListNode* pnext);

__declspec(dllexport) void PrintListNode(ListNode* pNode);

__declspec(dllexport) void printList(ListNode* pHead);

__declspec(dllexport) void DestroyList(ListNode* pHead);

__declspec(dllexport) void AddToTail(ListNode** pHead, int value);

__declspec(dllexport) void RemoveNode(ListNode* pHead, int value);

#endif //OFFER6_LIST_H
