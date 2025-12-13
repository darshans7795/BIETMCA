#include <stdio.h>

int main() {
    int num, size, i, key;
    int left, right, mid;

    printf("Enter the number to perform Searching Technique\nPress 1: for Linear Search\nPress 2: for Binary Search\n");
    scanf("%d", &num);

    if(num == 1) {
        printf("You have selected Linear Search!\n");
    } else if(num == 2) {
        printf("You have selected Binary Search!\n");
    } else {
        printf("Invalid Number!\n");
        return 0;
    }

    printf("Enter the size of an array:\n");
    scanf("%d", &size);
    int arr[size];

    printf("Enter %d elements:\n", size);
    for(i = 0; i < size; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Entered elements: ");
    for(i = 0; i < size; i++) {
        printf("[%d] ", arr[i]);
    }
    printf("\n");

    printf("Enter a key element to search:\n");
    scanf("%d", &key);

    int found = 0;

    switch(num) {
        case 1: // Linear Search
            for(i = 0; i < size; i++) {
                if(arr[i] == key) {
                    printf("Element found at position: %d\n", i + 1);
                    found = 1;
                    break;
                }
            }
            if(!found) {
                printf("Element not found!\n");
            }
            break;

        case 2: // Binary Search
            // Ensure the array is sorted for Binary Search
            for(i = 0; i < size - 1; i++) {
                for(int j = i + 1; j < size; j++) {
                    if(arr[i] > arr[j]) {
                        int temp = arr[i];
                        arr[i] = arr[j];
                        arr[j] = temp;
                    }
                }
            }

            left = 0;
            right = size - 1;
            while(left <= right) {
                mid = (left + right) / 2;
                if(arr[mid] == key) {
                    printf("Element found at position: %d\n", mid + 1);
                    found = 1;
                    break;
                } else if(key > arr[mid]) {
                    left = mid + 1;
                } else {
                    right = mid - 1;
                }
            }

            if(!found) {
                printf("Element not found!\n");
            }
            break;
    }

    return 0;
}
