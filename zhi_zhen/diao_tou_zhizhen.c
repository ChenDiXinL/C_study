#include<stdio.h>

int main(){
    int a[10];
    int i;
    for(i=0;i<10;i++){
        scanf("%d",&a[i]);
    }

    int* p;
    p = a+9;

    for(i=0;i<10;i++){
        printf("%d ", *(p-i));
    }
}