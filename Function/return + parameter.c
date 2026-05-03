#include <stdio.h>

int sum(int a, int b) 
{
    int result = a + b;
    return result;
}

int subtract(int a, int b); // Function prototype

int main() 
{
    int val=sum(5, 10);
    printf("The sum is: %d\n", val);
    
    int val2=subtract(10, 5);
    printf("The difference is: %d\n", val2);
    
    return 0;
}

int subtract(int a, int b) 
{
    int result = a - b;
    return result;
}