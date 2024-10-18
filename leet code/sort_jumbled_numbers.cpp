#include <bits/stdc++.h>
using namespace std;

vector<int> sortJumbled(vector<int> &mapping, vector<int> &nums)
{
    vector<int> op;
    vector<pair<int, int>> opMap;
    vector<int> mappedOp;
    for (int i = 0; i < nums.size(); i++)
    {
        int count = 0;
        int mappedNum = 0;
        int temp = nums[i];
        if (nums[i] == 0)
        {
            opMap.push_back(make_pair(nums[i], mapping[0]));
            continue;
        }

        while (temp != 0)
        {
            int rem = temp % 10;
            temp = temp / 10;
            mappedNum = mappedNum + mapping[rem] * pow(10, count);
            ++count;
        }
        opMap.push_back(make_pair(nums[i], mappedNum));
    }
    sort(opMap.begin(), opMap.end(), [](const pair<int, int> &a, const pair<int, int> &b)
         { return a.second == b.second ? a.first > b.first : a.second < b.second; });
    for (auto i : opMap)
    {
        op.push_back(i.first);
    }
    return op;
}

int main()
{
    vector<int> mapping = {8, 9, 4, 0, 2, 1, 3, 5, 7, 6};
    vector<int> x = {991, 338, 38};
    vector<int> y = sortJumbled(mapping, x);
    for (auto i : y)
    {
        cout << i << " ";
    }

    return 0;
}