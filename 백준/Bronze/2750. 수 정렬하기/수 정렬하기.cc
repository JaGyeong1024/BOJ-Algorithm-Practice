#include <iostream>
using namespace std;

void merge(int* arr, int left, int mid, int right) {

    int* sorted = new int[right - left + 1];
    int i, j, k;
    i = left;
    j = mid + 1;
    k = 0;

    while (i <= mid && j <= right) {
        if (arr[i] <= arr[j]) sorted[k++] = arr[i++];
        else sorted[k++] = arr[j++];
    }

    if (i > mid)
        while (j <= right) sorted[k++] = arr[j++];
    else
        while (i <= mid) sorted[k++] = arr[i++];

    for (i = left, k = 0; i <= right; i++, k++) arr[i] = sorted[k];

    delete[] sorted;
}

void mergeSort(int* arr, int left, int right) {
    if (left < right) {
        int mid = (left + right) / 2;
        mergeSort(arr, left, mid);
        mergeSort(arr, mid + 1, right);
        merge(arr, left, mid, right);
    }
}

int main(void) {

    int N = 0;
    cin >> N;
    int* arr = new int[N];

    for (int i = 0; i < N; i++)
        cin >> arr[i];

    mergeSort(arr, 0, N - 1);

    for (int i = 0; i < N; i++)
        cout << arr[i] << '\n';

    delete[]arr;

    return 0;
}