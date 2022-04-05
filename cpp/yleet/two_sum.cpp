#include "leetcode.h"
#include <vector>
#include <unordered_map>
#include <string>

using namespace std;

string TwoSum::describe() {
    return "Given an array of integers, return indices of the two numbers \
such that they add up to a specific target. \
Given nums = [2, 7, 11, 15], target = 9, \
Because nums[0] + nums[1] = 2 + 7 = 9, return [0, 1].";
}

vector<int> TwoSum::solute(vector<int>& nums, int target){
    vector<int> res;
    unordered_map<int, int> m;
    for (int i=0; i < nums.size(); ++i ) {
        if (m.count(target - nums[i]) ) {
            return {i, m[target - nums[i]]} ;
        }
        m[nums[i]] = i;
    }
    return {};
}