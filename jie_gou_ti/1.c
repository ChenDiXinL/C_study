#include<stdio.h>
#include<string.h>
/*
按GBK编码，每个汉字字符占两个字节，
以下代码在utf-8中需注意中文占三字节，
*/
struct Student_Info
{
    char name[41];//名字最多有20个汉字
    int age;
    float score;
};


int main(){
    struct Student_Info aStudent;

    // 输入学生信息
    scanf("%s", aStudent.name);
    scanf("%d", &aStudent.age);
    scanf("%f", &aStudent.score);

    // 输出学生信息
    printf("姓名：%s\n", aStudent.name);
    printf("年龄：%d\n", aStudent.age);
    printf("成绩：%.2f\n", aStudent.score);

    // 计算名字
    char xing[41], ming[41];
    xing[0] = aStudent.name[0];
    xing[1] = aStudent.name[1];
    xing[2] = aStudent.name[2];
    xing[3] = '\0';

    strcpy(ming, aStudent.name+3);
    //char *strcpy(char *destination, const char *source);
    //其中,destination是目标字符串,source是要复制的内容。
    //strcpy函数会将source的内容复制到destination中,直到遇到空字符为止。
    //如果destination的空间不足,strcpy函数会将多出的部分截断。
    int lastIndext = strlen(aStudent.name+3);
    ming[lastIndext] = '\0';

    printf("姓：%s, 名：%s\n", xing, ming);

    // 计算年龄
    aStudent.age++;
    printf("明年%d岁了\n", aStudent.age+1);

    // 计算分数
    if(aStudent.score>=60){
        printf("及格\n");
    }else{
        printf("不及格\n");
    }

    return 0;
}