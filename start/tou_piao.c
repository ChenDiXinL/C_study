#include<stdio.h>

int main(){
    int tou_piao_ren_num, ming_xin_num, ming_xin, i;
    int ticket[200];

    scanf("%d%d", &tou_piao_ren_num, &ming_xin_num);//有多少人投，投给多少人

    for(i=0; i<ming_xin_num; i++)
    {
        ticket[i] = 0;//把所有明星票数先清零
    }
    for (i=0; i<tou_piao_ren_num; i++)//一个一个依次投
    {
        printf("%d tou_piao_ren vote:", i+1);
        scanf("%d", &ming_xin);//选择要投的人
        ticket[ming_xin-1]++;//那个人加1
    }
    for(i=0; i<ming_xin_num; i++)
    {
        if(i<ming_xin_num-1){
            printf("%d ", ticket[i]);
        }else{
            printf("%d", ticket[i]);
        }
        
    }
    return 0;
}