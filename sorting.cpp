#include <iostream>
#include <vector>
using namespace std;

void selection_sort(int arr[], int size)
{
    for (int i = 0; i < size; i++)
    {
        int minIndex = i;
        // cout << "Loop :" << i << endl;
        for (int j = i; j < size; j++)
        {
            if (arr[j] < arr[minIndex])
            {
                int temp = arr[minIndex];
                arr[minIndex] = arr[j];
                arr[j] = temp;
                cout << "runs" << endl;
            }
        }
    }
}

void bubble_sort(int arr[], int size)
{
    for (int i = size - 1; i >= 1; i--)
    {
        for (int j = 0; j < i; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}

void insertion_sort(int arr[], int size)
{
    for (int i = size - 1; i >= 1; i--)
    {
        int j = i;
        while (j > 0 && arr[j] < arr[j - 1])
        {
            int temp = arr[j];
            arr[j] = arr[j - 1];
            arr[j - 1] = temp;
            j--;
        }
    }
}

void merge(int arr[], int low, int high, int mid)
{
    vector<int> temp = {};
    int left = low;
    int right = mid + 1;
    while (left <= mid && high >= right)
    {
        if (arr[left] <= arr[right])
        {
            temp.push_back(arr[left]);
            left++;
        }
        else
        {
            temp.push_back(arr[high]);
            right++;
        }
    }
    while (left <= mid)
    {
        temp.push_back(arr[low]);
        left++;
    }
    while (right <= high)
    {
        temp.push_back(arr[right]);
        right++;
    }

    for (int i = low; i <= high; i++)
    {
        arr[i] = temp[i - low];
    }
    cout << endl;
    for (int i = low; i <= high; i++)
    {
        cout << arr[i] << " ";
    }
}

void merge_sort(int arr[], int low, int high)
{
    if (low == high)
        return;
    int mid = (low + high) / 2;
    merge_sort(arr, low, mid);
    merge_sort(arr, mid + 1, high);
    merge(arr, low, high, mid);
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

    merge_sort(a, 0, length - 1);
    cout << endl;
    for (int i = 0; i < length; i++)
    {
        cout << a[i] << " ";
    }

    return 0;
}