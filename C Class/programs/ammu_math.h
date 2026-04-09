
int generic_result = 0; // global variable to store the result of any operation

int SumOfTwoProperties(int a, int b)
{
    int result = a + b;  // local variable to store the result of addition
    generic_result = result; // store the result in the global variable
    return result;
}

int SubtractionOfTwoProperties(int a, int b)
{
    int result1 = a - b; // local variable to store the result of subtraction
    
    generic_result = result1;

    return result1;
}


