#include<stdio.h>
#include<conio.h>

int main() {
    int num, key;
    printf("Enter the size of an array: ");
    scanf("%d", &num);

    int array[num];

    printf("Enter the sorted elements:\n");
    for(int i = 0; i < num; i++) {
        scanf("%d", &array[i]);
    }

    printf("Entered elements: ");
    for(int i = 0; i < num; i++) {
        printf("[%d] ", array[i]);
    }

    printf("\nEnter Key value: ");
    scanf("%d", &key);

    int left = 0;
    int right = num - 1;

    while(left <= right) {
        int mid = (left + right) / 2;   // ? mid updated every iteration

        if(array[mid] == key) {
            printf("Element is found at index %d!", mid);
            return 0;
        }
        else if(array[mid] < key) {
            left = mid + 1;
        }
        else {
            right = mid - 1;
        }
    }

    printf("Element is not found!");
    return 0;
}
