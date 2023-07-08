#ifndef __ARRAY_HPP__
#define __ARRAY_HPP__
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


class Array {
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
        double findMedianSortedArrays(std::vector<int>& nums1, std::vector<int>& nums2);
        int removeDuplicates(std::vector<int>& nums);
};



#endif // __ARRAY_HPP__