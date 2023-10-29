#include<stdio.h>

void mySwap(int* pa, int* pb);

int main()
{
    int a, b;

    scanf("%d%d", &a, &b);
    mySwap(&a, &b);
    printf("a=%d, b=%d\n", a, b);

}

//定义了指针变量pa， pb，传入地址，指针就指向了地址处的变量
//再通过*间接访问main（）处的a，b变量交换值

void mySwap(int* pa, int* pb)
{
    int temp;
    temp = *pa;
    *pa = *pb;
    *pb = temp;
    //不用return
}