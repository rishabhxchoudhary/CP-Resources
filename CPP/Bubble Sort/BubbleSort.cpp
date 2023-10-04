#include <iostream>
using namespace std;

void bubbleSort(int arr[], int n)
{
    // Traverse through all elements in the array
    for (int i = 0; i < n - 1; i++)
    {
        // Flag to optimize the algorithm by detecting whether any swaps were made in the pass
        bool swapped = false;

        // Last i elements are already in place, so we don't need to check them again
        for (int j = 0; j < n - i - 1; j++)
        {
            // Compare adjacent elements and swap them if they are in the wrong order
            if (arr[j] > arr[j + 1])
            {
                swap(arr[j], arr[j + 1]);
                swapped = true;
            }
        }

        // If no two elements were swapped in the inner loop, the array is already sorted
        if (!swapped)
            break;
    }
}

int main()
{
    int arr[] = {64, 25, 12, 22, 11};
    int n = sizeof(arr) / sizeof(arr[0]);

    cout << "Original Array: ";
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;

    bubbleSort(arr, n);

    cout << "Sorted Array: ";
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}
