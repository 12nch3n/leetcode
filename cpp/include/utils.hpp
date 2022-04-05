#include <vector>
#include "leetcode.h"

static ListNode* MakeList(vector<int> input){
    ListNode *head = new ListNode(-1), *cur=head;
    for (auto a : input ) {
        cur->next = new ListNode(a);
        cur = cur->next;
    }
    return head->next;
} 