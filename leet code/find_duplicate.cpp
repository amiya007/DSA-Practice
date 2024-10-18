#include <bits/stdc++.h>
using namespace std;

int findDuplicate(vector<int> &nums)
{
    int xor1 = 0;
    int xor2 = 0;
    int count = 1;
    const int n = nums.size();
    for (auto i : nums)
    {
        xor1 = xor1 ^ i;
        if (count < n)
        {
            cout << count << " ";
            xor2 = xor2 ^ count;
            ++count;
        }
    }
    return xor1 ^ xor2;
}

int main()
{
    vector<int> x = {1, 1, 2, 3};
    cout << findDuplicate(x);
    return 0;
}