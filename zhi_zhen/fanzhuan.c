#include<stdio.h>

#define MAX 500

void inputImg(int a[][MAX], int m, int n);
void flipImg(int a[][MAX], int m, int n, int t);
void showImg(int a[][MAX], int m, int n);

int main()
{
    int cases, m, n, t;
    int img[MAX][MAX];
    scanf("%d", &cases);

    while(cases--){
        scanf("%d %d %d", &m, &n, &t);

        inputImg(img, m, n);
        flipImg(img, m, n, t);
        showImg(img, m, n);
    }
}

void inputImg(int a[][MAX], int m, int n){
    int i, j;
    for(i = 0; i < m; i++){
        for(j = 0; j < n; j++){
            scanf("%d", (int*)a + i*MAX + j);
        }
    }
}

void flipImg(int a[][MAX], int m, int n, int t){
    int i, j;
    int i1, i2, j1, j2, temp;

    if(t == 1){
        for ( j = 0; j < n; j++)
        {
            for(i1=0, i2=m-1; i1<i2; i1++, i2--){
                temp = a[i1][j];
                a[i1][j] = a[i2][j];
                a[i2][j] = temp;
            }
        }
        
    }else{
        for(i = 0; i < m; i++){
            for(j1=0, j2=n-1; j1<j2; j1++, j2--){
                temp = a[i][j1];
                a[i][j1] = a[i][j2];
                a[i][j2] = temp;
            }
        }
    }
}

void showImg(int a[][MAX], int m, int n){
    int i, j;
    for(i=0; i<m; i++){
        printf("%d", a[i][0]);
        for(j=1; j<n; j++)
            printf(" %d", a[i][j]);

        printf("\n");
    }
    printf("\n");
}