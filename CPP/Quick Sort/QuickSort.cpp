#include <iostream>
#include <vector>

// Function to partition the array
int partition(std::vector<int> &arr, int low, int high)
{
    // Choose the rightmost element as the pivot
    int pivot = arr[high];

    // Index of the smaller element
    int i = (low - 1);

    // Iterate through all elements in the array
    for (int j = low; j <= high - 1; j++)
    {
        // If the current element is smaller than or equal to the pivot
        if (arr[j] <= pivot)
        {
            // Swap arr[i] and arr[j]
            std::swap(arr[i + 1], arr[j]);
            i++;
        }
    }

    // Swap arr[i + 1] and arr[high] to place the pivot in its correct position
    std::swap(arr[i + 1], arr[high]);

    // Return the position where the pivot is placed
    return (i + 1);
}

// Function to perform the quick sort
void quickSort(std::vector<int> &arr, int low, int high)
{
    if (low < high)
    {
        // Find pivot element such that
        // element smaller than pivot are on the left
        // element greater than pivot are on the right
        int pivot = partition(arr, low, high);

        // Recursively sort the sub-arrays
        quickSort(arr, low, pivot - 1);
        quickSort(arr, pivot + 1, high);
    }
}

int main()
{
    std::vector<int> arr = {12, 11, 13, 5, 6, 7};
    int size = arr.size();

    std::cout << "Original Array: ";
    for (int i = 0; i < size; i++)
    {
        std::cout << arr[i] << " ";
    }
    std::cout << std::endl;

    quickSort(arr, 0, size - 1);

    std::cout << "Sorted Array: ";
    for (int i = 0; i < size; i++)
    {
        std::cout << arr[i] << " ";
    }
    std::cout << std::endl;

    return 0;
}
