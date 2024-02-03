#include <iostream>
#include <vector>
using namespace std;

int largestElementInArray(int arr[], int size)
{
    int largest = arr[0];
    for (int i = 1; i < size; i++)
    {
        if (largest < arr[i])
        {
            largest = arr[i];
        }
    }

    return largest;
}

int secondLargestElementInArray(int arr[], int size)
{
    int largest = arr[0];
    int sLargest = -1;
    for (int i = 1; i < size; i++)
    {
        if (largest < arr[i])
        {
            sLargest = largest;
            largest = arr[i];
        }
    }
    return sLargest;
}

bool sortedOrNot(int arr[], int length)
{

    for (int i = 0; i < length; i++)
    {
        if (arr[i] > arr[i + 1])
            return false;
    }
    return true;
}

void removeDuplicate(int arr[], int size)
{
    int count = 0;
    vector<int> nonDuplicate = {};
    for (int i = 0; i < size; i++)
    {
        if (arr[i - 1] != arr[i])
        {
            cout << arr[i] << endl;
            nonDuplicate.push_back(arr[i]);
            count++;
        }
    }
    cout << "Count:" << count << endl;
    for (int i = 0; i < nonDuplicate.size(); i++)
    {
        cout << nonDuplicate[i] << " ";
    }
}

void shiftByPlaces(int arr[], int size, int shiftNo)
{
    if (shiftNo < size)
    {
        vector<int> shiftArray = {};
        for (int i = 0; i < shiftNo; i++)
        {
            shiftArray.push_back(arr[i]);
        }
        for (int i = shiftNo - 1; i < size; i++)
        {
            arr[i - shiftNo] = arr[i];
        }
        for (int i = 0; i < shiftArray.size(); i++)
        {
            arr[size - shiftNo + i] = shiftArray[i];
        }
    }
    else
    {
        cout << "Wrong shifting value";
    }
}

void move_zeros_to_end(int arr[], int size)
{
    int i = 0;
    int j = size - 1;
    while (i < j)
    {
        if (arr[j] == 0)
        {
            j--;
        }
        else
        {
            if (arr[i] == 0)
            {
                swap(arr[i], arr[j]);
                j--;
                i++;
            }
            else
            {
                i++;
            }
        }
    }
}

// void unionOfTwoArray(vector<int> a, vector<int> b)
// {
//     vector<int> unionArray = {};

//     for (int i = 0; i < unionArray.size(); i++)
//     {
//         cout << unionArray[i] << " ";
//     }
// }

int max_consicutive_of_1(int arr[], int size)
{
    int count = 0;
    int maxCount = 0;
    for (int i = 0; i < size; i++)
    {
        if (arr[i] == 1)
        {
            count++;
        }
        else
        {
            count = 0;
        }

        if (count > maxCount)
        {
            maxCount = count;
        }
    }

    return maxCount;
}

void num_appear_once(int arr[], int size)
{
    int hash[25] = {0};
    for (int i = 0; i < size; i++)
    {
        hash[arr[i]] += 1;
    }
    for (int i = 0; i < 25; i++)
    {
        if (hash[i] == 1)
        {
            cout << i;
        }
    }
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
    // vector<int> x = {1, 2, 3, 4, 5};
    // vector<int> y = {1, 2, 3, 4, 5, 6};
    // move_zeros_to_end(a, length);
    // unionOfTwoArray(x, y);
    cout << max_consicutive_of_1(a, length);
    cout << endl;
    num_appear_once(a, length);
    // for (int i = 0; i < length; i++)
    // {
    //     cout << a[i] << " ";
    // }
    return 0;
}