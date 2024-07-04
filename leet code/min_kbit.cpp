

/*
TTTTTT  L        EEEEEEEEE
  TT    L        E
  TT    L        E
  TT    L        EEEEEEEEE
  TT    L        EEEEEEEEE
  TT    L        E
  TT    LLLLL    E
  TT    LLLLL    EEEEEEEEE */

#include <iostream>
#include <vector>
using namespace std;

int minKBitFlips(vector<int> &nums, int k)
{
    int totalFlips = 0;
    int j = 0;
    while (j <= nums.size() - k)
    {
        // 0, 1, 0
        if (nums[j] == 1)
        {
            j++;
            continue;
        }
        int jCount = j; // j=0
        bool incJ = true;
        for (int i = 0; i < k; i++)
        {

            // j = 0
            if (nums[jCount + i] != 0)
            {
                nums[jCount + i] = 0;
                incJ = false;
                continue;
            }

            nums[jCount + i] = 1;
            if (incJ)
            {
                j++;
            }
        }
        totalFlips++;
    }
    for (int j = 0; j < nums.size(); j++)
    {
        if (nums[j] == 0)
        {
            totalFlips = -1;
        }
    }

    return totalFlips;
}
int main()
{
    vector<int> a = {0, 1, 1, 0, 0, 0};
    vector<int> b = {0, 1, 0, 0, 1, 0};
    cout << minKBitFlips(b, 4);
    return 0;
}