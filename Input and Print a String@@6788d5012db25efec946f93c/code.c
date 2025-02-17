#include <stdio.h>

int main() {
    char word[100]; // Assuming a maximum word length of 99 characters + null terminator

    scanf("%99s", word); // Read the word, limiting input to prevent buffer overflows

    printf("You entered: %s\n", word); // Print the word

    return 0;
}