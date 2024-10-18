#include <bits/stdc++.h>
using namespace std;

int maxOperations(vector<int> &nums, int k)
{
    const int n = nums.size();
    if (n == 0 || n == 1)
    {
        return 0;
    }

    sort(nums.begin(), nums.end());
    int i = 0;
    int j = n - 1;
    int count = 0;
    while (i < j)
    {
        int val = nums[i] + nums[j];
        if (val < k)
        {
            ++i;
        }
        else if (val > k)
        {
            --j;
        }
        else
        {
            ++count;
            --j;
            ++i;
        }
    }
    return count;
}

int main()
{
    vector<int> n = {1, 2, 3, 4};
    int t = 5;
    cout << maxOperations(n, t);
    return 0;
}