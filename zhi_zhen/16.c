#include<stdio.h>
#include<stdlib.h>

// void Print(){
//     printf("Hello world\n");
// }

int *Add(int* a, int* b)
{
    int c = (*a) + (*b);
    printf("%d\n", &c);
    return &c;//这里返回&c后为什么没有结果
}


int main()
{
    int a = 1, b = 2;
    int* ptr;
    *ptr = Add(&a, &b);
    // Print()
    //printf("Sum = %d\n", *ptr);//Segmentation fault in VS_code
    printf("%d\n", ptr);//output----"0",

}