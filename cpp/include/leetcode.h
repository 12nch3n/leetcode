#ifndef LEETCODE
#define LEETCODE

#include <string>
#include <vector>

using namespace std;

class Solution {
public:
    virtual string describe(){
        return "";
    };
};


struct ListNode {
    ListNode(int value):val(value),next(nullptr){}
    int val;
    ListNode* next;
};


class TwoSum : Solution {
public:
    vector<int> solute(vector<int>& nums, int target);
    string describe();
};


class AddTwoNumbers : Solution {
public:
    ListNode* solute(ListNode* l1, ListNode* l2);
    string describe();
};

#endif // LEETCODE