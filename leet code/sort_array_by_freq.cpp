
#include <bits/stdc++.h>
using namespace std;

struct D
{
    int data;
    int freq;
    D(int data, int freq) : data(data), freq(freq) {}
};
vector<int> frequencySort(vector<int> &nums)
{
    unordered_map<int, int> dataList;
    vector<int> dList;
    for (auto i : nums)
    {
        ++dataList[i];
    }
    vector<pair<int, int>> vec(dataList.begin(), dataList.end());

    sort(vec.begin(), vec.end(), [](const pair<int, int> &a, const pair<int, int> &b)
         { return a.second > b.second; });

    vector<int> result;
    for (const auto &p : vec)
    {
        result.insert(result.end(), p.second, p.first);
    }
    return result;
}
int main()
{
    vector<int> x = {1, 1, 1, 2, 3, 3, 3, 3, 3};
    vector<int> y = frequencySort(x);
    for (auto i : y)
    {
        cout << i << " ";
    }

    return 0;
}