#include<stdio.h>

void Add(int a, int b);
void Sub(int a, int b);
void mult(int a, int b);
void div(int a, int b);

int main()
{
    int k, a, b;
    void(*fun_pointer)(int, int);

    printf("1.a+b\n");
    printf("2.a-b\n");
    printf("3.a*b\n");
    printf("4.a/b\n");
    scanf("%d", &k);
    if(k<1 || k>4) return 0;

    scanf("%d %d", &a, &b);
    if(k == 1) fun_pointer = Add;
    if(k == 2) fun_pointer = Sub;
    if(k == 3) fun_pointer = mult;
    if(k == 4) fun_pointer = div;
    //还没调用，指针指向了函数

    fun_pointer(a, b);//调用指向的函数
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

void div(int a, int b){
    printf("%d/%d=%d\n",a, b, a/b);
}