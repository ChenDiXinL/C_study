#include<stdio.h>
int main()
{
    int i, j, n, t;
    int a[100];

    scanf("%d", &n);
    for(i=0; i<n; i++)
    {
        scanf("%d", &a[i]);
    }

    i = 0;
    j = n-1;
    if(n%2==0)
    {
        while (i == j)
        {
            t = a[i];
            a[i] = a[j];
            a[j] = t;

            i++;
            j--;

        }      
    }else{
        while (j < i)
        {
            t = a[i];
            a[i] = a[j];
            a[j] = t;

            i++;
            j--;
        }
        
    }
    for(i=0; i<n; i++)
    {
        printf("%d ", a[i]);
    }

}