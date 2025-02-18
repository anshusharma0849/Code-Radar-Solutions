#include <stdio.h>

int main() {
    char str1[100]; // Array to store the first string (adjust size as needed)
    char str2[100]; // Array to store the second string (adjust size as needed)

    // Read the two strings separated by space. 
    // %99s limits the input to 99 characters to prevent buffer overflows
    scanf("%99s %99s", str1, str2);  

    // Print the strings
    printf("You entered: %s and %s\n", str1, str2);

    return 0;
}