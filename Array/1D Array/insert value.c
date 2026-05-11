#include <stdio.h>

int main() 
{
    int n;
    scanf("%d", &n);
    int arr[n];
    for (int i = 0; i < n; i++) 
    {
        scanf("%d", &arr[i]);
    }
    int idx, val;
    scanf("%d %d", &idx, &val);
    for(int i=n-1; i>idx; i--) 
    {
        arr[i] = arr[i-1];
    }
    arr[idx] = val;
    for (int i = 0; i < n; i++) 
    {
        printf("%d ", arr[i]);
    }
    return 0;
}