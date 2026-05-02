#include <stdio.h>

int main() 
{
    int n , star = 1 , space = n-1;
    scanf("%d", &n);

    for (int i = 1; i <= n; i++) 
    {
        for (int j = 1; j <= space; j++) 
        {
            printf(" ");
        }
        for (int j = 1; j <= star; j++) 
        {
            printf("*");
        }
        printf("\n");

        star += 2;
        space--;
    }

    return 0;
}