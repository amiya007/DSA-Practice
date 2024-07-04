#include <iostream>
#include <vector>
using namespace std;

int numberOfSubarrays(vector<int> &nums, int k)
{
    int count = 0;
    int rep = 0;

    // [1,1,2,1,1]

    for (int i = 0; i < nums.size(); i++)
    {
        for (int j = i; j < nums.size(); j++)
        {
            cout << "loop " << i << endl;
            if (nums[j] % 2 != 0)
            {
                rep++;
                cout << rep << endl;
                if (rep == k)
                {
                    rep = 0;
                    count++;
                    break;
                }
            }
        }
        rep = 0;
    }
    return count;
}

int main()
{
    vector<int> a = {2, 2, 2, 1, 2, 2, 1, 2, 2, 2};
    cout << numberOfSubarrays(a, 2);
    return 0;
}