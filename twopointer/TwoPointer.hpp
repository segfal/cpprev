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
    public:
        int maxArea(std::vector<int>& height);
        std::vector<int> twoSum(std::vector<int>& nums, int target);
        std::vector<std::vector<int>> threeSum(std::vector<int>& nums);
        std::vector<std::vector<int>> fourSum(std::vector<int>& nums, int target);
        int threeSumClosest(std::vector<int>& nums, int target);
        int threeSumSmaller(std::vector<int>& nums, int target);
        



};



#endif // __TWOPOINTER_HPP__