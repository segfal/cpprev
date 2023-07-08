#ifndef __TWOPOINTER_HPP__
#define __TWOPOINTER_HPP__
#include <vector>
#include <iostream>
#include <algorithm>
#include <string>
#include <unordered_map>
#include <unordered_set>
#include <queue>
#include <stack>
#include <cmath>
#include <climits>
#include <numeric>
#include <functional>

class TwoPointer
{
    private:
        int i, j;
        struct ListNode {
            int val;
            ListNode *next;
            ListNode(int x) : val(x), next(NULL) {}
        };
        struct TreeNode{
            int val;
            TreeNode *left;
            TreeNode *right;
            TreeNode(int x) : val(x), left(NULL), right(NULL) {}
        };

    public:
        int maxArea(std::vector<int>& height);
        std::vector<int> twoSum(std::vector<int>& nums, int target);
        std::vector<std::vector<int>> threeSum(std::vector<int>& nums);
        std::vector<std::vector<int>> fourSum(std::vector<int>& nums, int target);
        int threeSumClosest(std::vector<int>& nums, int target);
        int threeSumSmaller(std::vector<int>& nums, int target);
        ListNode* reverseBetween(ListNode* head, int m, int n);
        int bagOfTokensScore(std::vector<int>& tokens, int P);




};




#include "TwoPointer.cpp"
#endif // __TWOPOINTER_HPP__