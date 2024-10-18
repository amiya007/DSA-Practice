#include <bits/stdc++.h>
using namespace std;

int removeElement(vector<int> &nums, int val)
{
    sort(nums.begin(), nums.end());
    int count = 0;
    int low = 0;
    int high = nums.size() - 1;
    while (low < high)
    {
        int mid = (low + high) / 2;
        if (mid == val)
        {
            count++;
            nums[mid] == 0;
        }
        else if (mid > val)
        {
            high = mid - 1;
        }
        else
        {
            low = mid + 1;
        }
    }
    return count;
}

int main()
{

    return 0;
}