/*定义大小为变量的数组*/
#include<stdio.h>
int main(){
    int n, i;
    scanf("%d", &n);
    int a[n];
    for(i=0; i<n; i++)
        scanf("%ld", a[i]);

    for(i=0; i<n; i++)
        printf("%d", a[i]);
}