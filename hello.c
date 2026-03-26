#include <stdio.h>

int main() {

    int age = 12;

    printf("Enter your age: ");
    scanf("%d", &age);

    printf("\nAge: %d", age);
    printf("\nAge address: %d", &age);

    return 0;
}
