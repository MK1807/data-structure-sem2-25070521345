#include <stdio.h>

int main() {
    int arr[] = {5, 3, 9, 1, 7};
    int n = 5;
    int key = 9;
    int found = -1;

    for (int i = 0; i < n; i++) {
        if (arr[i] == key) {
            found = i;
            break;
        }
    }

    if (found != -1)
        printf("Element found at index %d\n", found);
    else
        printf("Element not found\n");

    return 0;
}
// linear seearch by mk