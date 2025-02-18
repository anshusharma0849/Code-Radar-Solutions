#include <stdio.h>

int main() {
    char name[50];
    int age;
    char hobby[50];

    printf("Enter name, age, and hobby: ");
    scanf("%s %d %s", name, &age, hobby);

    printf("Name: %s\n", name);
    printf("Age: %d\n", age);
    printf("Hobby: %s\n", hobby);

    return 0;
}