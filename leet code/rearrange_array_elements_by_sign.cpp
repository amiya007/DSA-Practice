#include <bits/stdc++.h>
using namespace std;

vector<int> rearrangeArray(vector<int> &nums)
{
    vector<int> ans;
    vector<int> pos;
    vector<int> neg;

    for (const int num : nums)
        (num > 0 ? pos : neg).push_back(num);

    for (int i = 0; i < pos.size(); ++i)
    {
        ans.push_back(pos[i]);
        ans.push_back(neg[i]);
    }
    return ans;
}

int main()
{
    vector<int> a = {1, -2, -4, 2, 12, -9};
    vector<int> x = rearrangeArray(a);
    for (int i = 0; i < x.size(); i++)
    {
        cout << x[i] << " ";
    }
    return 0;
}