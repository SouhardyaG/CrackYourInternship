void swap(int* x, int* y)
{
    int temp = *x;
    *x = *y;
    *y = temp;
}
 
void bubbleSort(int arr[], int n)
{
    int i, j;
    for (i = 0; i < n - 1; i++)
 
        for (j = 0; j < n - i - 1; j++)
            if (arr[j] > arr[j + 1])
                swap(&arr[j], &arr[j + 1]);
}

int findMinDiff(int arr[], int n, int m)
{
    if (m == 0 || n == 0)
        return 0;
 
    bubbleSort(arr, n);
 
    if (n < m)
        return -1;
 
    int min_diff = INT_MAX;
 
    for (int i = 0; i + m - 1 < n; i++) {
        int diff = arr[i + m - 1] - arr[i];
        if (diff < min_diff)
            min_diff = diff;
    }
    return min_diff;
}

//complexity O(n^2 + n/m)
