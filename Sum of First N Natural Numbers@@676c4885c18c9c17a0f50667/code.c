#include <stdio.h>

int main() {
    int n, sum = 0;

    // Taking input from the user
    printf("");
    scanf("%d",&n);

    // Calculating sum using loop
    for (int i = 1; i <= n; i++) {
        sum+=i;
    }

    // Printing the result
    printf("%d",sum);

    return 0;
}
