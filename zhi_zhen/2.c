#include<stdio.h>
void max_and_min(int a[], int len, int *max, int *min);

int main()
{
    int a[] = {1, 2, 3, 4, 5, 6, 7, 8, 9};
    int max = a[0];
    int min = a[0];

    max_and_min(a, sizeof(a)/sizeof(a[0]), &max, &min);
    printf("%d\n%d", max, min);

}

void max_and_min(int a[], int len, int *max, int *min)
{
    int i;
    for(i=0; i<len; i++)
    {
        if(a[i] >= *max)
            *max = a[i];
        if(a[i] <= *min)
            *min = a[i];
    }

    //return *max, *min;
}