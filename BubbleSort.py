def bubble_sort(arr):
    n = len(arr)
    for i in range(n):
        for j in range(0, n - i - 1):
            if arr[j] > arr[j + 1]:
                arr[j], arr[j + 1] = arr[j + 1], arr[j]

lst = [5, 2, 9, 1, 5, 6]
bubble_sort(lst)
print(lst)  # [1, 2, 5, 5, 6, 9]
