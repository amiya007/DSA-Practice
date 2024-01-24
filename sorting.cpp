#include <iostream>
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

int main()
{
    int length;
    cin >> length;
    int a[25];
    for (int i = 0; i < length; i++)
    {
        cin >> a[i];
    }

    insertion_sort(a, length);
    for (int i = 0; i < length; i++)
    {
        cout << a[i] << " ";
    }

    return 0;
}