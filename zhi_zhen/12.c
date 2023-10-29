#include<stdio.h>

int main()
{
    int s[2][3] = 
    {
        {1,2,3},
        {4,5,6}
    };

    int i, j;

    for(i=0; i<2; i++){
        for(j=0; j<3; j++){
            printf("%d\t", s[i][j]);
        }
        printf("\n");
    }
    printf("每个元素的地址:\n");
    for(i=0; i<2; i++){
        for(j=0; j<3; j++){
            printf("%d\t", &s[i][j]);
        }
        printf("\n");
    }


    //int *p = s;======错误，s是一个指向一维数组的指针，不是整型指针
    // int (*p) = s;//====警告没报错
    // printf("%d\n", *p);
    printf("s[3]-Address = %d\n", &s[3]);
    printf("s[3] = %d\n", s[3]);
    printf("s[2] = %d\n", s[2]);//s【2】是指向某一内存的指针，返回随意地址
    printf("========================");
    printf("%d\n", s+1);
    printf("%d\n", *(s+1));
    printf("以上两行等效，原因：s+1是指针地址加一返回第二行数组开头指针\n, *(s+1)同样,加上*地址运算符后取得的值仍是第二行第一个的地址\n");

    printf("%d\n", *(*(s+1)+2));//等效为s[1][2] = 6

    printf("s[1] = %d\n", s[1]);//返回指向第二行的一维数组
    printf("s[1][1] = %d\n", s[1][1]);

    printf("获取数字2，即s[0][1]\n");
    printf("s[0][1] = %d\n", *((*s)+1));
    printf("s[0][1] = %d\n", *(*(s)+1));
    printf("s[0][1] = %d\n", *(*s+1));
    printf("s[0][1] = %d\n", *(s[0]+1));

    printf("获取s[1][0] = 4\n");
    printf("s[1][0] = %d\n", *(*(s+1)));//说明地址运算符优先级高于加减

    printf("s[0][0] = %d\n", **s);//二重指针？两次解引用？

    printf("%d\n", *(*(s+1)+2)+1);

}