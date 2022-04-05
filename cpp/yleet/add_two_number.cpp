#include "leetcode.h"
#include <string>

using namespace std;

string AddTwoNumbers::describe() {
    return "You are given two non-empty linked lists representing two non-negative integers. \
The digits are stored in reverse order and each of their nodes contain a single digit. Add \
the two numbers and return it as a linked list. You may assume the two numbers do not contain \
any leading zero, except the number 0 itself.";
}

ListNode* AddTwoNumbers::solute(ListNode* l1, ListNode* l2){
    ListNode *res = new ListNode(-1), *cur = res;
    int carry = 0;
    while( l1 || l2 ) {
        int v1 = l1 ? l1->val : 0; 
        int v2 = l2 ? l2->val : 0;
        int sum = v1 + v2 + carry;
        carry = sum / 10;
        cur->next = new ListNode(sum%10);
        cur = cur->next;
        if (l1) l1 = l1->next;
        if (l2) l2 = l2->next;
    }
    if ( carry > 0 ) cur->next = new ListNode(1);
    return res->next;
}