#include<stdio.h>
#define NUM 10

// int score[100];声明全局数组可以在所有函数里对其进行修改，前提是将数组名作为地址传入
//若声明全局变量，不用指针访问，在传入函数后，在函数里改变的是形式参数

void inputScore(int* a);
int getBest(int* a);
void showFirst(int* a, int max);
void BuBBleSort(int* a);

int main()
{
    int score[NUM];
    int max;
    
    inputScore(score);

    max = getBest(score);
    printf("max:%d\n", max);

    showFirst(score, max);

    BuBBleSort(score);

    return 0;
}


void inputScore(int* a)
{
    int i;
    for(i=0; i<NUM; i++)
    {
        printf("number %d :\n", i+1);
        // scanf("%d", (a+i));//这样写就不循环了？
        scanf("%d", &a[i]);
    }
}

int getBest(int* a)
{
    int best;
    best = *a;
    for(int i=0; i<NUM; i++)
        if(*(a+i) >= best) best = *(a+i);

    return best;
}

void showFirst(int* a, int max)
{
    int i;
    for(i=0; i<NUM; i++)
    {
        if(max == *(a+i)) 
            printf("First: number %d\n", i+1);
    }
}

/// @brief 
/// @param a 
void BuBBleSort(int* a)
{
    int i, j, temp;
    for(i=0; i<NUM; i++)
    {
        for(j=0; j<NUM; j++)
        {
            if(*(a+j) > *(a+j+1))
            {
                temp = *(a+j);
                *(a+j) = *(a+j+1);
                *(a+j+1) = temp;
            }
        }
    }
    printf("Here are the sort result:\n");
    for(i=0; i<NUM; i++)
        printf("%d ", *(a+i));

    /*如果在void inputScore(int* a)中输入1000
    为什么会在此输出16，被当作二进制？*/
}