// Given an array of integers nums and an integer target, return indices of the two numbers such that they add up to target.

// You may assume that each input would have exactly one solution, and you may not use the same element twice.

// You can return the answer in any order.

#include <bits/stdc++.h>
using namespace std;

vector<int> twoSum(vector<int> &nums, int target)
{
    if (nums.size() < 2)
    {
        return {};
    }
    vector<int> answers;
    for (int i = 0; i < nums.size(); i++)
    {
        if (target >= nums[i])
        {
            for (int j = 0; j < nums.size(); j++)
            {
                if (i != j && nums[i] + nums[j] == target)
                {
                    answers.push_back(i);
                    answers.push_back(j);
                    return answers;
                }
            }
        }
    }
    return {};
}

int main()
{
    vector<int> x = {1, 5, 0, 0};
    vector<int> y;
    y = twoSum(x, 0);
    unordered_map<int, int> x;
    
    cout << y[0];
    cout << y[1];
    return 0;
}