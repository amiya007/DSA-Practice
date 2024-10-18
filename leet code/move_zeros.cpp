#include <bits/stdc++.h>
using namespace std;

void printV(vector<int> num)
{
    for (auto i : num)
    {
        cout << i << " ";
    }
}

void moveZeroes(vector<int> &nums)
{
    int i = 0;
    int j = 1;
    const int n = nums.size();
    // 0 1 0 1 2 3 4
    if (n == 1)
    {
        return;
    }
    while (j < n)
    {
        if (nums[i] == 0 && nums[j] == 0)
        {
            ++j;
        }
        else if (nums[i] != 0 && nums[j] == 0)
        {
            ++i;
            ++j;
        }
        else if (nums[i] == 0 && nums[j] != 0)
        {
            int temp = nums[i];
            nums[i] = nums[j];
            nums[j] = temp;
            ++i;
            ++j;
            printV(nums);
        }
        else
        {
            ++i;
            ++j;
        }
    }
}

int main()
{
    vector<int> x = {0, 1, 0, 2, 3};
    moveZeroes(x);
    return 0;
}