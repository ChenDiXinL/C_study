#include<stdio.h>
#include<math.h>

int main(){
    int student_number, scores_num_for_each_stu, i;
    float sum, average_value, temple_s, score[100];

    /*分别计算每个学生成绩的标准差*/

    scanf("%d", &student_number);//输入学生人数
    while (student_number--)//一个循环计算一个学生
    {
        scanf("%d", &scores_num_for_each_stu);//这个学生有多少个成绩
        sum = 0;//
        for(i=0; i<scores_num_for_each_stu; i++)
        {
            scanf("%f", &score[i]);
            sum +=score[i];
        }

        average_value = sum/scores_num_for_each_stu;
        
        temple_s = 0;
        for(i=0; i<scores_num_for_each_stu; i++)
        {
            temple_s += (average_value-score[i])*(average_value-score[i]);
        }
        
        printf("%.2f\n", sqrt(temple_s/(scores_num_for_each_stu-1)));
    }

    return 0;
    
}