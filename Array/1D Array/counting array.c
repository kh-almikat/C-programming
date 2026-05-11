#include <stdio.h>

int main() 
{
    int n,m;
    scanf("%d %d", &n, &m);
    int fre[m+1];
    
    for(int i=1;i<=m;i++)
    {
        fre[i]=0;
    }

    for (int i = 1; i <= n; i++) 
    {
        int x;
        scanf("%d", &x);
        fre[x]++;
    }

    for(int i=1;i<=m;i++)
    {
        printf("%d \n",fre[i]);
    }
    return 0;
}