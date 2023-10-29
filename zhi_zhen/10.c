#include<stdio.h>

int main()
{
    int A[] = {2, 4, 5, 8, 1};
    int i;
    for(i=0; i<=5; i++)
    {
        printf("Address of A[%d] is %d\n",i, &A[i]);
        printf("Address of A[%d] is %d\n",i, A+i);
        printf("value of A[%d] is %d\n",i, A[i]);
        printf("value of A[%d] is %d\n",i, *(A+i));
    }

}