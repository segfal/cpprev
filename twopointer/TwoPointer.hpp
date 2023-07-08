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




};



int TwoPointer::maxArea(std::vector<int>& height)
{
    int maxArea = 0;
    int i = 0, j = height.size() - 1;
    while(i < j)
    {
        maxArea = std::max(maxArea, std::min(height[i], height[j]) * (j - i));
        if(height[i] < height[j])
            i++;
        else
            j--;
    }
    return maxArea;
}

std::vector<int> TwoPointer::twoSum(std::vector<int>& nums, int target)
{
    std::vector<int> res;
    std::unordered_map<int, int> map;
    for(int i = 0; i < nums.size(); i++)
    {
        if(map.find(target - nums[i]) != map.end())
        {
            res.push_back(map[target - nums[i]]);
            res.push_back(i);
            return res;
        }
        map[nums[i]] = i;
    }
    return res;
}

std::vector<std::vector<int>> TwoPointer::threeSum(std::vector<int>& nums)
{
    std::vector<std::vector<int>> res;
    std::sort(nums.begin(), nums.end());
    for(int i = 0; i < nums.size(); i++)
    {
        if(i != 0 && nums[i] == nums[i - 1])
            continue;
        int target = -nums[i];
        int j = i + 1, k = nums.size() - 1;
        while(j < k)
        {
            if(nums[j] + nums[k] == target)
            {
                res.push_back({nums[i], nums[j], nums[k]});
                j++;
                k--;
                while(j < k && nums[j] == nums[j - 1])
                    j++;
                while(j < k && nums[k] == nums[k + 1])
                    k--;
            }
            else if(nums[j] + nums[k] < target)
                j++;
            else
                k--;
        }
    }
    return res;
}


std::vector<std::vector<int>> TwoPointer::fourSum(std::vector<int>& nums, int target)
{
    std::vector<std::vector<int>> res;
    std::sort(nums.begin(), nums.end());
    for(int i = 0; i < nums.size(); i++)
    {
        if(i != 0 && nums[i] == nums[i - 1])
            continue;
        for(int j = i + 1; j < nums.size(); j++)
        {
            if(j != i + 1 && nums[j] == nums[j - 1])
                continue;
            int k = j + 1, l = nums.size() - 1;
            while(k < l)
            {
                if(nums[i] + nums[j] + nums[k] + nums[l] == target)
                {
                    res.push_back({nums[i], nums[j], nums[k], nums[l]});
                    k++;
                    l--;
                    while(k < l && nums[k] == nums[k - 1])
                        k++;
                    while(k < l && nums[l] == nums[l + 1])
                        l--;
                }
                else if(nums[i] + nums[j] + nums[k] + nums[l] < target)
                    k++;
                else
                    l--;
            }
        }
    }
    return res;
}

int TwoPointer::threeSumClosest(std::vector<int>& nums, int target)
{
    int res = 0;
    int minDiff = INT_MAX;
    std::sort(nums.begin(), nums.end());
    for(int i = 0; i < nums.size(); i++)
    {
        if(i != 0 && nums[i] == nums[i - 1])
            continue;
        int j = i + 1, k = nums.size() - 1;
        while(j < k)
        {
            int sum = nums[i] + nums[j] + nums[k];
            if(sum == target)
                return sum;
            else if(sum < target)
                j++;
            else
                k--;
            if(std::abs(sum - target) < minDiff)
            {
                minDiff = std::abs(sum - target);
                res = sum;
            }
        }
    }
    return res;
}


int TwoPointer::threeSumSmaller(std::vector<int>& nums, int target)
{
    int res = 0;
    std::sort(nums.begin(), nums.end());
    for(int i = 0; i < nums.size(); i++)
    {
        int j = i + 1, k = nums.size() - 1;
        while(j < k)
        {
            if(nums[i] + nums[j] + nums[k] < target)
            {
                res += k - j;
                j++;
            }
            else
                k--;
        }
    }
    return res;
}






#endif // __TWOPOINTER_HPP__