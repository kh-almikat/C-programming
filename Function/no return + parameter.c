#include <stdio.h>

void sum(int a,int b) 
{
    int result = a + b;

    printf("%d", result);
}



int main() 
{
    sum(10,5);
    
    return 0;
}