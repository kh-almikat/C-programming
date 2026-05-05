#include<stdio.h>
int main()
{
    int x = 10;
    printf("%d\n", x);
    printf("%p\n", &x); // x r address print

    int *ptr;
    ptr = &x; // x r address pointer r vitor store
    printf("%p\n", ptr);

    printf("%p/n", &ptr); // pointer variable r address

    printf("%d", *ptr); // Dereferencing a pointer

    return 0;
}
