/*
1.（）
2.-，++，--，！，&，*，int，sizeof
3.*%/
4.+-
5.<,<=,>,>=,
6.==,!=
7.&&, ||, |, ^, &
8.? a : b
9.=, /=, +=, -=, ....
10., 逗号


*/



#include<stdio.h>
#include<stdbool.h>
int main()
{
    int x, y, z;
    x = 3;
    y = 4;
    z = 5;
    bool a = 5-5;
    printf("%d\n", a);
    a = 'x' && 'y';
    printf("%d\n", a);
    a = x-y == 0;
    printf("%d\n", a);
    a = x || y || z;
    printf("%d\n", a);
    a = x && y && z;
    printf("%d\n", a);
    z = 0;
    a = z || x && z;
    printf("%d\n", a);
    printf("%d\n", x || 1 + 10 && 2);//优先级： （）【】大于 +-*/% 大于 与或
    //等效为x||11&&2
}

/*  
 !>&&>||   
*/

