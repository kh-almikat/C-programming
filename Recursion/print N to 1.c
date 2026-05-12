#include <stdio.h>

void hello (int n)
{
    if(n == 0)
    {
        return;
    }
    printf("%d ", n);

    hello(n - 1);     
}

int main() 
{
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);

    hello(n);   
    return 0;
}
