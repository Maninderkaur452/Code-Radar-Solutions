// Your code here...
#include <stdio.h>

int main() {
    int n;

    // Input number of rows
    printf("");
    scanf("%d", &n);

    // Loop for each row
    for (int i = n; i >= 1; i--) {
        // Loop for printing numbers in each row
        for (int j = 1; j <= i; j++) {
            printf("%d ",i); // Print the number
        }
        printf("\n"); // Move to the next line after each row
    }

    return 0;
}

