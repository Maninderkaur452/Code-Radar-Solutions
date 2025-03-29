// Your code here...
#include <stdio.h>

int main() {
    int n;
    printf("");
    scanf("%d", &n);

    for (int i = 1; i <= n; i++) {
        char ch = 'A'; // Start with character 'A' for each row
        for (int j = 1; j <= i; j++) {
            printf("%c", ch ); // Print the character
            ch = ch + 1; // Increment the character
        }
        printf("\n "); // Move to the next line after each row
    }

    return 0;
}
