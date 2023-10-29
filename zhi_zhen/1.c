#include<stdio.h>

//void fun1(int *p,int p);
void fun2(int k);
void fun1(int *p);

int main(){
    int i;
    int p = 0;

    /*
    p与 *p 会冲突//并不会
    previous definition of 'p' was here ：void fun1(int *p,int p)
    */

    scanf("%d", &i);
    fun1(&i);
    fun2(i);
    printf("%d\n", i);

    printf("%d", p);
    return 0;
}

void fun1(int *p)
//void fun1(int *p,int p);
{
    //printf("p=%d\n", p);//====得到p的地址
    printf("*p=%d\n", *p);
    //p++;==========================加上这一句，k值不会因“*p = 100;”而改变？
    *p = 100;
}

void fun2(int k)
{
    printf("k=%d\n", k);
    k = 200;
}