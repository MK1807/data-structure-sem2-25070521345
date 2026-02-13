#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);

    int arr[n];
    for (int i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    int temp[n];

    // size of subarrays: 1, 2, 4, 8...
    for (int size = 1; size < n; size *= 2) {

        // left index of subarray
        for (int left = 0; left < n - 1; left += 2 * size) {

            int mid = left + size - 1;
            int right = left + 2 * size - 1;

            if (mid >= n - 1)
                continue;
            if (right >= n)
                right = n - 1;

            int i = left;
            int j = mid + 1;
            int k = left;

            // merge
            while (i <= mid && j <= right) {
                if (arr[i] <= arr[j])
                    temp[k++] = arr[i++];
                else
                    temp[k++] = arr[j++];
            }

            while (i <= mid)
                temp[k++] = arr[i++];

            while (j <= right)
                temp[k++] = arr[j++];

            // copy back
            for (int x = left; x <= right; x++)
                arr[x] = temp[x];
        }
    }

    for (int i = 0; i < n; i++)
        printf("%d ", arr[i]);

    return 0;
}
//merge sort by mk