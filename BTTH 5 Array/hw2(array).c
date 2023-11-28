#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int linearSearch(int arr[], int n, int x) {
    int i;
    for (i = 0; i < n; i++) {
        if (arr[i] == x) {
            return i;
        }
    }
    return -1;
}

int binarySearch(int arr[], int low, int high, int x) {
    if (high >= low) {
        int mid = low + (high - low) / 2;
        if (arr[mid] == x) {
            return mid;
        }
        if (arr[mid] > x) {
            return binarySearch(arr, low, mid - 1, x);
        }
        return binarySearch(arr, mid + 1, high, x);
    }
    return -1;
}

int main() {
    int arr[10000];
    int n = sizeof(arr) / sizeof(arr[0]);
    int i, x;

    for (i = 0; i < n; i++) {
        arr[i] = i;
    }

    clock_t start_linear = clock();
    x = linearSearch(arr, n, n + 1);
    clock_t end_linear = clock();
    double time_linear = (double)(end_linear - start_linear) / CLOCKS_PER_SEC;

    clock_t start_binary = clock();
    x = binarySearch(arr, 0, n - 1, n + 1);
    clock_t end_binary = clock();
    double time_binary = (double)(end_binary - start_binary) / CLOCKS_PER_SEC;
    printf("Linear Search execution time: %lf seconds\n", time_linear);
    printf("Binary Search execution time: %lf seconds\n", time_binary);
    return 0;
}