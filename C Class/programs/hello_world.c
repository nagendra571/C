
#include <stdio.h>

int main()  // is the entry point of the program
{
    printf("Enter your age: ");    
    
    
    int age;  // declare a variable named age of type int (integer)
    scanf("%d", &age);  // & means "address of" the variable age

    printf("You are %d years old.\n", age);


    
    return 0;   // 0 means the program ended successfully
}

