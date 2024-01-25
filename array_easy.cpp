#include <iostream>
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

int main()
{
    int length;
    cin >> length;
    int a[25];
    for (int i = 0; i < length; i++)
    {
        cin >> a[i];
    }
    cout << secondLargestElementInArray(a, length);

    cout << endl;
    // for (int i = 0; i < length; i++)
    // {
    //     cout << a[i] << " ";
    // }
    return 0;
}