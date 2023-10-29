#include<stdio.h>

#define SIZE 3

int main()
{
    int i, j;
    int num0fX;
    int num0F0;
    int result = -1;
    
    char borad[SIZE][SIZE];
    for(i=0; i<SIZE; i++)
    {
        for(j=0; j<SIZE; j++)
        {
            scanf("%c", &borad[i][j]);
        }
    }
    show(i, j, board);
}


void show(int i,int j, char borad)
{
    for(i=0; i<SIZE; i++)
    {
        for(j=0; j<SIZE; j++)
        {
            printf("%c", borad[i][j]);
        }
    }
}