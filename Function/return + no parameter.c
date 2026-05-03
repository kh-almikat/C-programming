#include <stdio.h>

int sum() 
{
    int a, b;
    scanf("%d %d", &a, &b);
    int result = a + b;
    return result;
}



int main() 
{
    int val=sum();
    printf("The sum is: %d\n", val);
    
    return 0;
}