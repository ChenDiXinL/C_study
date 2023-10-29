#include<stdio.h>

int main()
{
    int i, n;
    int max = 0;
    int score[100];

    scanf("%d", &n);
    for(i=0; i<n; i++)
    {
        scanf("%d", &score[i]);
    }
    do{
        if(score[i]>=max)
        {
            max = score[i];
        }
        i--;
    }while(i>=0);

    printf("%d", max);
    
}