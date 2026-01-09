#include <stdio.h>

int main() {
    int arr[] = {1, 3, 5, 7, 9};
    int target = 7;
    int left = 0, right = 4;

    while (left <= right) {
        int mid = (left + right) / 2;

        if (arr[mid] == target) {
            printf("Found at index %d\n", mid);
            return 0;
        } else if (arr[mid] < target) {
            left = mid + 1;
        } else {
            right = mid - 1;
        }
    }

    printf("Not found\n");
    return 0;
}

