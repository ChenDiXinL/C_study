#include<stdio.h>
#define SIZE 5

int main()
{
    int a[SIZE] = {1, 2, 3, 4, 5}, *p;
    int i;
    p = a;
    for(i = 0; i < SIZE; i ++)
    {
        printf("%d", *(p+i));
    }
    printf("\n");

    int b[SIZE] = {5, 4, 3, 2, 1};

    p = b;

    for(i = 0; i < SIZE; i ++)
    {
        // printf("%d", *p);
        // p++;

        printf("%d", *(p+i));
    }

    return 0;
}