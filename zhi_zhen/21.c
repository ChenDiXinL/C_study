#include<stdio.h>
#include<stdlib.h>

void Add(int a, int b);
void Sub(int a, int b);
void mult(int a, int b);
void divi(int a, int b);

int main()
{
    int k, a, b;
    void(**pointer)(int, int);//定义二阶函数指针
    pointer = malloc(4*sizeof(int));
    pointer[0] = Add;
    pointer[1] = Sub;
    pointer[2] = mult;
    pointer[3] = divi;

    printf("1.a+b\n");
    printf("2.a-b\n");
    printf("3.a*b\n");
    printf("4.a/b\n");
    scanf("%d", &k);
    if(k<1 || k>4)
        return 0;

    scanf("%d %d", &a, &b);
    pointer[k-1](a, b);

    free(pointer);

    return 0;
}

void Add(int a, int b){
    printf("%d+%d=%d\n",a, b, a+b);
}

void Sub(int a, int b){
    printf("%d-%d=%d\n",a, b, a-b);
}

void mult(int a, int b){
    printf("%d*%d=%d\n",a, b, a*b);
}

void divi(int a, int b){
    printf("%d/%d=%d\n",a, b, a/b);
}