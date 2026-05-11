


// requirement is print Hello for 5 times.
// requirement is, If you wish you loose a credit, Wish untill you don't have any credit left.
// Your current credits are 50;

// 1. Initialization
// 2. Condition Checking
// 3. Increment/Decrement

#include<stdio.h>

int main()
{
    int maximum_wishes_count = 5;

    for(int i=1; i<=maximum_wishes_count; i++)
    {
        printf(" current value of i is %d\n", i);
        printf("Hello!\n");
    }

    int credits = 50;
    for(int i=1; i<=credits; i++)
    {
        printf(" current value of i is %d\n", i);
        printf("Wish!\n");
    }

    for(int i= credits; i>=1; i--)
    {
        printf(" current value of i is %d\n", i);
        printf("Wish!\n");
    }


    
    return 0;  // return 0 to indicate successful execution
}


