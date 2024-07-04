#include <iostream>
#include <vector>
using namespace std;

vector<int> sortingOf0s1s2s(vector<int> &vec)
{
    vector<int> sortedVector;
    int left = 0;
    int mid = 0;
    int right = 0;
    for (int i = 0; i < vec.size(); i++)
    {
        if (vec[i] == 0)
        {
            left++;
        }
        if (vec[i] == 1)
        {
            mid++;
        }
        if (vec[i] == 2)
        {
            right++;
        }
    }
}

int main()
{

    return 0;
}