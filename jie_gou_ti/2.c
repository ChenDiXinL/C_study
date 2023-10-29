#include<stdio.h>
#include<string.h>

#define N 1000

struct ContactInfo
{
    char name[41];
    char tel[21];
    long long QQ;
} pbs[N];//定义了数组pbs，每个元素的类型为结构体类型struct ContactInfo

int main()
{
    int x, i, n;
    scanf("%d", &x);
    for(i=0; i<x; i++){
        //输入
        scanf("%s %s %lld\n", 
                pbs[i].name, 
                pbs[i].tel, 
                &pbs[i].QQ);
            }

    char name[41];
    scanf("%d\n", &n);
    while(n--){
        scanf("%s", name);
        for(i=0; i<x; i++){
            if(strcmp(name, pbs[i].name) == 0){
                //strcmp函数是C语言中用于比较两个字符串是否相等的函数。
                //int strcmp(const char *str1, const char *str2);
                /*
                其中,str1和str2是两个要比较的字符串。
                如果两个字符串相等,则返回0;
                如果str1的字符顺序在str2之前,则返回负数;
                如果str1的字符顺序在str2之后,则返回正数。
                */
                //则输出
                printf("%s %s %lld\n", 
                        pbs[i].name, 
                        pbs[i].tel, 
                        pbs[i].QQ);
                break;
            }
        }
        //如果找不到
        if(i == x) printf("Not Found\n");
    }

    return 0;
}