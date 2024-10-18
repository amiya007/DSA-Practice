#include <bits/stdc++.h>
using namespace std;

bool checkithBitSetOrNot(int num, int i)
{
    int rShift = num >> i;
    if (1 & rShift)
    {
        return true;
    }
    return false;
}

int setithBit(int num, int i)
{
    int shifted1 = 1 << i;
    return num | shifted1;
}

int noOfSetBits(int num)
{
    int ans = 0;
    while (num != 0)
    {
        ans += (num & (num - 1));
        num = num >> 1;
    }
    return ans;
}
int findNoOfFlips(int num, int goal)
{
    int ans = 0;
    int xorOfNumAndGoal = num ^ goal;
    ans = noOfSetBits(xorOfNumAndGoal);
    return ans;
}

vector<vector<int>> getSubSetList(vector<int> lst)
{
    vector<vector<int>> ans;
    for (int i = 0; i < (lst.size() << 1) - 1; i++)
    {
        vector<int> loopLst;
        for (int i = 0; i < lst.size(); i++)
        {
            if (i & (1 << i))
            {
                cout << lst[i] << " ";
                loopLst.push_back(lst[i]);
            }
        }
        ans.push_back(loopLst);
    }
}

int findUniqueNo(vector<int> lst)
{
    int ans = 0;
    for (auto i : lst)
    {
        ans = ans ^ i;
    }
    return ans;
}

int findUniqueNoOf3(vector<int> lst)
{
    int ans = 0;
    for (int i = 0; i < 31; i++)
    {
        int count = 0;
        for (int j = 0; j < lst.size(); j++)
        {
            if (lst[j] & (1 << i))
            {
                ++count;
            }
        }
        if (count % 3 == 1)
        {
            ans = ans | (1 << i);
        }
    }
    return ans;
}

int findUniqueNoOf3_2(vector<int> lst)
{
    int ans = -1;
    int i = 1;
    while (i < lst.size())
    {
        if (lst[i] != lst[i - 1])
        {
            return lst[i - 1];
        }
        i += 3;
    }
    cout << i << endl;
    return lst[lst.size() - 1];
}

int main()
{
    vector<int> x = {1, 1, 1, 2, 2, 2, 3, 3, 3, 4};
    // cout << findUniqueNo(x);
    cout << findUniqueNoOf3_2(x);

    return 0;
}