#include <stdio.h>

void hello (int i, int n)
{
    if(i == n)
    {
        return;
    }
    printf("%d ", i);

    hello(i + 1, n);     
}

int main() 
{
    int n, i = 1;
    printf("Enter a number: ");
    scanf("%d", &n);

    hello(i, n);   
    return 0;
}