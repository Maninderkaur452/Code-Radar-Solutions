#include <stdio.h>

int main() {
    float num;  // Declare a variable to store the floating-point number
    
    // Taking input using scanf
    printf("Enter a floating-point number: ");
    scanf("%f", &num);
    
    // Printing the input using printf
    printf("You entered: %.2f\n", num);  // %.2f formats the number to 2 decimal places
    
    return 0;
}
