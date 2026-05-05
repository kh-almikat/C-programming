#include <stdio.h>

void change(int x) 
{
    x = 100;
    printf("Inside function: %d\n", x);
}

int main() 
{
    int num = 10;
    change(num);
    
    printf("Outside function: %d\n", num);
    return 0;
}