


// requirement is print Hello for 5 times.

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
    
    return 0;  // return 0 to indicate successful execution
}