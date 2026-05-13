#include <stdio.h>

int main()
{
    int r, c;
    scanf("%d %d", &r, &c);

    int arr[r][c];

    // input matrix
    for(int i = 0; i < r; i++)
    {
        for(int j = 0; j < c; j++)
        {
            scanf("%d", &arr[i][j]);
        }
    }

    int n, m;
    scanf("%d", &n);   // কোন row প্রিন্ট করবে
    scanf("%d", &m);   // কোন column প্রিন্ট করবে

    // print specific row
    printf("Row %d: ", r);
    for(int j = 0; j < c; j++)
    {
        printf("%d ", arr[n][j]);
    }

    printf("\n");

    // print specific column
    printf("Column %d: ", c);
    for(int i = 0; i < r; i++)
    {
        printf("%d ", arr[i][m]);
    }

    return 0;
}