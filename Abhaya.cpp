#include <stdio.h>

int main() {
    int i, j, rows;

    // Asking the user to input the number of rows
    printf("Enter the number of rows: ");
    scanf("%d", &rows);

    // Loop to print the pattern
    for(i = 1; i <= rows; ++i) {
        for(j = 1; j <= i; ++j) {
            printf("* ");
        }
        printf("\n");
    }

    return 0;
}

