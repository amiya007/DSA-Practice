#include <iostream>
#include <vector>
#include <numeric>
#include <algorithm>
using namespace std;

vector<int> mergeSortedVectors(const vector<int> &vec1, const vector<int> &vec2)
{
    vector<int> merged;
    merged.reserve(vec1.size() + vec2.size()); // Reserve space for the merged vector

    size_t i = 0, j = 0;

    // Merge the vectors using two pointers
    while (i < vec1.size() && j < vec2.size())
    {
        if (vec1[i] < vec2[j])
        {
            merged.push_back(vec1[i]);
            ++i;
        }
        else
        {
            merged.push_back(vec2[j]);
            ++j;
        }
    }

    // Copy any remaining elements from vec1
    while (i < vec1.size())
    {
        merged.push_back(vec1[i]);
        ++i;
    }

    // Copy any remaining elements from vec2
    while (j < vec2.size())
    {
        merged.push_back(vec2[j]);
        ++j;
    }

    return merged;
};

double findMeanSortedArrays(vector<int> &nums1, vector<int> &nums2)
{
    double answer = 0;
    int m = nums1.size();
    int n = nums2.size();
    for (int i = 0; i < m + n; i++)
    {
        if (i < m)
        {
            answer += nums1[i];
            continue;
        }
        answer += nums2[i - m];
    }

    return answer / (m + n);
};
double findMedianSortedArrays(vector<int> &nums1, vector<int> &nums2)
{
    double answer = 0;
    // Creating a vector to store the merged vector
    vector<int> merged(nums1.size() + nums2.size());

    // Merging the two vectors
    merge(nums1.begin(), nums1.end(), nums2.begin(),
          nums2.end(), merged.begin());
    if (merged.size() % 2 == 0)
    {
        answer += (merged[merged.size() / 2] + merged[(merged.size() / 2) - 1]) / 2.0;
        return answer;
    }
    answer += merged[(merged.size() / 2) - 1] / 2;
    return answer;
};

int main()
{
    vector<int> a = {1, 3};
    vector<int> b = {2, 7};

    cout << findMedianSortedArrays(a, b);
    return 0;
}