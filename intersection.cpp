#include <bits/stdc++.h>
#include <algorithm>
using namespace std;

vector<int> intersect(vector<int> &nums1, vector<int> &nums2)
{

    vector<int> ans;
    int i = 0;
    int j = 0;

    while (i < nums1.size() && j < nums2.size())
        if (nums1[i] < nums2[j])
        {
            ++i;
        }
        else if (nums1[i] > nums2[j])
        {
            ++j;
        }
        else
        {
            // ans.push_back(nums1[i]);
            // ++i;
            // ++j;

            if (!ans.empty())
            {
                if (ans.back() != nums1[i])
                {
                    ans.push_back(nums1[i]);
                    ++i;
                    ++j;
                }
            }
            else
            {
                ans.push_back(nums1[i]);
                ++i;
                ++j;
            }
        }

    return ans;
}

int main()
{
    vector<int> a = {1, 2, 2, 1};
    vector<int> b = {2, 2};
    vector<int> c = intersect(a, b);
    for (int i = 0; i < c.size(); i++)
    {
        cout << c[i];
    }

    return 0;
}