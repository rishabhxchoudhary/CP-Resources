#include <iostream>
#include <vector>

using namespace std;

// Binary Search Function
int binarySearch(const vector<int> &arr, int key)
{
    int left = 0;
    int right = arr.size() - 1;

    while (left <= right)
    {
        int mid = left + (right - left) / 2;

        // If the key is found at the middle index, return its index
        if (arr[mid] == key)
        {
            return mid;
        }
        // If the key is in the left half of the array, update the right pointer
        else if (arr[mid] > key)
        {
            right = mid - 1;
        }
        // If the key is in the right half of the array, update the left pointer
        else
        {
            left = mid + 1;
        }
    }

    // Key not found in the array
    return -1;
}

int main()
{
    vector<int> sortedArray = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int key = 6;

    int result = binarySearch(sortedArray, key);

    if (result != -1)
    {
        cout << "Element found at index " << result << endl;
    }
    else
    {
        cout << "Element not found in the array." << endl;
    }

    return 0;
}
