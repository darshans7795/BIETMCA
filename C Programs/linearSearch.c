#include <stdio.h>
#include <conio.h>

int main() {
    int row, column, search;

    printf("Enter the number of rows & columns: ");
    scanf("%d%d", &row, &column);

    int array[row][column];

    printf("Enter the elements:\n");
    for (int i = 0; i < row; i++) {
        for (int j = 0; j < column; j++) {
            scanf("%d", &array[i][j]);
        }
    }

    printf("Entered elements are:\n");
    for (int i = 0; i < row; i++) {
        for (int j = 0; j < column; j++) {
            printf("[%d] ", array[i][j]);
        }
        printf("\n");
    }

    printf("Enter the element to search: ");
    scanf("%d", &search);

    int found = 0;
    for (int i = 0; i < row; i++) {
        for (int j = 0; j < column; j++) {
            if (search == array[i][j]) {
                printf("%d is found at Row %d, Column %d\n", search, i + 1, j + 1);
                found = 1;
                break;
            }
        }
        if (found) break;
    }

    if (!found) {
        printf("Element not found!\n");
    }

    getch();
    return 0;
}
