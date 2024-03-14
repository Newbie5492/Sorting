#include <stdio.h>

void bubbleSort(int arr[], int n) {
    for (int i = 0; i < n - 1; i++) {
        int swapped = 0;
        for (int j = 0; j < n - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
                swapped = 1;
            }
        }

        if (swapped == 0) {
            break;
        }
    }
}

int main() {
    int array[] = {5, 1, 3, 9, 4};
    int n = sizeof(array) / sizeof(array[0]);
    bubbleSort(array, n);
    for (int i = 0; i < n; i++) {
        printf("%d ", array[i]);
    }
    return 0;
}
