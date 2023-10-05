# Quick sort

def quick_sort(arr):
    if len(arr) < 2:
        return arr

    pivot = arr[0]
    less = [i for i in arr[1:] if i <= pivot]
    more = [i for i in arr[1:] if i > pivot]

    return quick_sort(less) + [pivot] + quick_sort(more)
