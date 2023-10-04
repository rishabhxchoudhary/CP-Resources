#include <iostream>
#include <vector>
using namespace std;

void merge(vector<int> &arr, int left, int mid, int right)
{
    int n1 = mid - left + 1;
    int n2 = right - mid;

    vector<int> left_half(n1);
    vector<int> right_half(n2);

    for (int i = 0; i < n1; i++)
        left_half[i] = arr[left + i];
    for (int i = 0; i < n2; i++)
        right_half[i] = arr[mid + 1 + i];

    int i = 0, j = 0, k = left;

    while (i < n1 && j < n2)
    {
        if (left_half[i] <= right_half[j])
        {
            arr[k] = left_half[i];
            i++;
        }
        else
        {
            arr[k] = right_half[j];
            j++;
        }
        k++;
    }

    while (i < n1)
    {
        arr[k] = left_half[i];
        i++;
        k++;
    }

    while (j < n2)
    {
        arr[k] = right_half[j];
        j++;
        k++;
    }
}

void mergeSort(vector<int> &arr, int left, int right)
{
    if (left < right)
    {
        int mid = left + (right - left) / 2;

        mergeSort(arr, left, mid);
        mergeSort(arr, mid + 1, right);

        merge(arr, left, mid, right);
    }
}

int search(vector<int> v, int x)
{
    int s = 0;
    int e = v.size() - 1;
    while (s <= e)
    {
        int mid = (s + e) / 2;
        if (v[mid] == x)
        {
            return mid;
        }
        else if (v[mid] > x)
        {
            e = mid - 1;
        }
        else
        {
            s = mid + 1;
        }
    }
    return -1;
}

int main()
{
    vector<int> arr = {12, 11, 13, 5, 6, 7};
    int n = arr.size();

    cout << "Original array: ";
    for (int i = 0; i < n; i++)
        cout << arr[i] << " ";
    cout << endl;

    mergeSort(arr, 0, n - 1);

    cout << "Sorted array: ";
    for (int i = 0; i < n; i++)
        cout << arr[i] << " ";
    cout << endl;

    return 0;
}
