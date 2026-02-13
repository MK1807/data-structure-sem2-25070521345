#include <stdio.h>

int main() {
    int arr[] = {1, 3, 5, 7, 9};   // sorted array
    int n = 5;
    int key = 7;

    int left = 0, right = n - 1;
    int mid, found = -1;

    while (left <= right) {
        mid = left + (right - left) / 2;

        if (arr[mid] == key) {
            found = mid;
            break;
        } else if (arr[mid] < key) {
            left = mid + 1;
        } else {
            right = mid - 1;
        }
    }

    if (found != -1)
        printf("Element found at index %d\n", found);
    else
        printf("Element not found\n");

    return 0;
}
// binary search by mk