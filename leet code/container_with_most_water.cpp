#include <bits/stdc++.h>
using namespace std;

int maxArea(vector<int> &height)
{
    const int n = height.size();
    if (n == 0 || n == 1)
        return 0;

    int i = 0;
    int j = n - 1;
    int max = 0;
    while (i < j)
    {
        if (height[i] <= height[j])
        {
            int temp = height[i] * (j - i);
            if (max < temp)
            {
                max = temp;
            }

            ++i;
        }
        else
        {
            int temp = height[j] * (j - i);
            if (max < temp)
            {
                max = temp;
            }
            --j;
        }
    }
    return max;
}

int main()
{
    vector<int> h = {1, 8, 6, 2, 5, 4, 8, 3, 7};
    cout << maxArea(h);
    return 0;
}