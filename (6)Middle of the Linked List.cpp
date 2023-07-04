/*
Link:https://leetcode.com/problems/middle-of-the-linked-list/
876. Middle of the Linked List
Given the head of a singly linked list, return the middle node of the linked list.If there are two middle nodes, return the second middle node.

Example 1:
Input: head = [1,2,3,4,5]
Output: [3,4,5]
Explanation: The middle node of the list is node 3.

Example 2:
Input: head = [1,2,3,4,5,6]
Output: [4,5,6]
Explanation: Since the list has two middle nodes with values 3 and 4, we return the second one.



*/
#include <bits/stdc++.h>
using namespace std;
struct ListNode
{
    int val;
    ListNode *next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode *next) : val(x), next(next) {}
};
ListNode *middleNode(ListNode *head)
{
    ListNode *tmp = head;
    ListNode *tmp1 = head;
    int cnt = 0;
    while (tmp)
    {
        cnt++;
        tmp = tmp->next;
    }
    int hlf = 0;
    hlf = (cnt / 2);
    while (hlf)
    {
        tmp1 = tmp1->next;
        hlf--;
    }

    return tmp1;
}
int main()
{
    return 0;
}