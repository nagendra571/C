
#include <stdio.h>

int main()  // is the entry point of the program
{   
    int day = 8;  // declare an integer variable and initialize it with a value
    
    if(day == 1)
    {
        printf("Monday!\n");  // print "Hello, World!" to the console
    }
    else if(day == 2)
    {
        printf("Tuesday!\n");  // print "Hello, World!" to the console
    }
    else if(day == 3)
    {
        printf("Wednesday!\n");  // print "Hello, World!" to the console
    }
    else if(day == 4)
    {
        printf("Thursday!\n");  // print "Hello, World!" to the console
    }
    else if(day == 5)
    {
        printf("Friday!\n");  // print "Hello, World!" to the console
    }
    else if(day == 6)
    {
        printf("Saturday!\n");  // print "Hello, World!" to the console
    }
    else if(day == 7)
    {
        printf("Sunday!\n");  // print "Hello, World!" to the console
    }
    else
    {
        printf("Invalid day!\n");  // print "Hello, World!" to the console
    }

    char grade = 'B';  // change the value of the variable

    switch (grade)
    {
    case 'A':   // grade == 'A'
        printf("Excellent!\n");
        break;
    case 'B':
        printf("Good!\n");
        break;
    case 'C':
        printf("Average!\n");
        break;
    case 'D':
        printf("Below Average!\n");
        break;
    case 'F':
        printf("Fail!\n");
        break;
    default:
        printf("Invalid grade!\n");
        break;
    }

    return 0;  // indicates that the program ended successfully
}


        break;
    case 2:
        printf("Tuesday!\n");
        break;
    case 3:
        printf("Wednesday!\n");
        break;
    case 4:
        printf("Thursday!\n");
        break;
    case 5:
        printf("Friday!\n");
        break;
    case 6:
        printf("Saturday!\n");
        break;
    case 7:
        printf("Sunday!\n");
        break;
    
    default:
        break;
    }
    
    return 0;  // indicates that the program ended successfully
}



