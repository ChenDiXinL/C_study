#include <stdio.h>

int main()
{
    int year, month, flag = 0;
    printf("请输入年份和月份，以空格间隔:!\n");
    scanf("%d %d", &year, &month);
    if( ( year % 4 ==0 && year % 100 != 0 ) || year % 400 ==0)
    {
        flag = 1;
        printf("您所输入的年份是闰年\n"); 
    }
    else
    {
        flag = 0; 
        printf("您所输入的年龄是平年！！\n");
    }
    switch(month) //switch用于测试变量值，给出相应结果 
    {
        case 1:
            printf("您所输入的是一月共31天\n");
            break;
        case 2:
            if(flag == 1) 
                printf("您所输入的是二月共29天\n");
            else
                printf("您所输入的是二月共28天\n"); 
            break;
        case 3:
            printf("您所输入的是三月共31天\n");
            break;
        case 4:
            printf("您所输入的是四月共30天\n");
            break;
        case 5:
            printf("您所输入的是五月共31天\n");
            break;
        case 6:
            printf("您所输入的是六月共30天\n");
            break;
        case 7:
            printf("您所输入的是七月共31天\n");
            break;
        case 8:
            printf("您所输入的是八月共31天\n");
            break;
        case 9:
            printf("您所输入的是九月共30天\n");
            break;
        case 10:
            printf("您所输入的是十月共31天\n");
            break;
        case 11:
            printf("您所输入的是十一月共30天\n");
            break;
        case 12:
            printf("您所输入的是十二月共31天\n");
            break;
    }
    return 0;
}

