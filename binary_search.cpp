#include <iostream>
using namespace std;

int binary_search_recursion(int arr[], int size, int low, int high, int target)
{
    if (low > high)
    {
        return -1;
    }
    else
    {
        int mid = (low + high) / 2;
        if (mid == target)
        {
            return mid;
        }
        else if (mid > target)
        {
            binary_search_recursion(arr, size, low, mid - 1, target);
        }
        else
        {
            binary_search_recursion(arr, size, mid + 1, high, target);
        }
    }
}

int binary_search(int arr[], int size, int target)
{
    int low = 0;
    int high = size - 1;
    while (low < high)
    {
        int mid = (low + high) / 2;
        if (mid == target)
        {
            return mid;
        }
        else if (mid > target)
        {
            high = mid - 1;
        }
        else
        {
            low = mid + 1;
        }
    }
    return -1;
}

int upperBound(int arr[], int size, int target)
{
    int low = 0;
    int high = size - 1;
    int ub;
    while (low <= high)
    {
        int mid = (low + high) / 2;
        if (arr[mid] > target)
        {
            ub = mid;
            high = mid - 1;
        }
        else
        {
            low = mid + 1;
        }
    }
    return ub;
}

int lowerBound(int arr[], int size, int target)
{
    int low = 0;
    int high = size - 1;
    int lb;
    while (low <= high)
    {
        int mid = (low + high) / 2;
        if (arr[mid] >= target)
        {
            lb = mid;
            high = mid - 1;
        }
        else
        {
            low = mid + 1;
        }
    }
    return lb;
}

pair<int, int> firstAndLastOccurence_using_LB_UB(int arr[], int size, int target)
{
    // Using LB and UB
    int lb = lowerBound(arr, size, target);
    if (lb == size || arr[lb] != target)
        return {-1, -1};
    return {lb, upperBound(arr, size, target) - 1};
}

int firstOccurence_using_BS(int arr[], int size, int target)
{
    int first = -1;
    int low = 0;
    int high = size - 1;
    while (low <= high)
    {
        int mid = (low + high) / 2;
        if (arr[mid] == target)
        {
            first = mid;
            high = mid - 1;
        }
        else if (arr[mid] < target)
        {
            low = mid + 1;
        }
        else
        {
            high = mid - 1;
        }
    }
    return first;
}

int lastOccurence_using_BS(int arr[], int size, int target)
{
    int last = -1;
    int low = 0;
    int high = size - 1;
    while (low <= high)
    {
        int mid = (low + high) / 2;
        if (arr[mid] == target)
        {
            last = mid;
            low = mid + 1;
        }
        else if (arr[mid] < target)
        {
            low = mid + 1;
        }
        else
        {
            high = mid - 1;
        }
    }
    return last;
}

// Rotated Sorted array (no duplication) search
int rotatedSorted_Array_Search(int arr[], int size, int target)
{
    int low = 0;
    int high = size - 1;
    while (low <= high)
    {
        int mid = (low + high) / 2;

        if (arr[mid] == target )
        {
            return mid;
        }
        else if (arr[mid] < arr[low] && arr[mid] < arr[target])
        {
            high = mid - 1;
        }
        else
        {
            low = mid + 1;
        }

        // else
        // {
        //     high = mid - 1;
        // }
    }
    return -1;
}

int main()
{
    int length;
    cin >> length;
    int a[25];
    for (int i = 0; i < length; i++)
    {
        cin >> a[i];
    }

    cout << rotatedSorted_Array_Search(a, length, 1) << endl;
    // cout << lastOccurence_using_BS(a, length, 1);
    cout << endl;

    return 0;
}