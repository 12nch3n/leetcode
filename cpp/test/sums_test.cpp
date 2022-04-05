#include <stdlib.h>
#include "leetcode.h"
#include <vector>
#include <iostream>
#include <gtest/gtest.h>
#include <string>
#include <iostream>

#include "utils.hpp"

using namespace std;

TEST(TWO_SUM, smoke_test){
    
    TwoSum* s = new TwoSum();
    cout<<s->describe()<<endl;
    auto input = vector<int>{2, 7, 11, 15};
    auto res = s->solute(input, 9);
    ASSERT_EQ(res[0], 1);
    ASSERT_EQ(res[1], 0);
}

TEST(ADD_TWO_NUMBER, smoke_test){
    AddTwoNumbers* s = new AddTwoNumbers();
    cout<<s->describe()<<endl;
    ListNode *input1 = MakeList(vector<int>{2,4,3} );
    ListNode *input2 = MakeList(vector<int>{5,6,4} );
    
    ListNode *res = s->solute(input1, input2);
    
    ListNode* x  = res;
    while(x){
        cout << x->val << endl;
        x = x -> next;
    }

    ASSERT_EQ(res->val, 7);
}
