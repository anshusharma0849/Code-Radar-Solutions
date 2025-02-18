#include <stdio.h>

int main() {
    char name[50]; // Array to store the name (adjust size as needed)
    int age;
    char hobby[50]; // Array to store the hobby (adjust size as needed)

    // Read the name (string)
    scanf("%49s", name); // Limit to 49 characters to prevent buffer overflow

    // Read the age (integer)
    scanf("%d", &age);

    // Read the hobby (string)
    scanf(" %49s", hobby); // Note the space before %49s to consume any leftover newline

    // Print the information
    printf("Name: %s\n", name);
    printf("Age: %d\n", age);
    printf("Hobby: %s\n", hobby);

    return 0;
}