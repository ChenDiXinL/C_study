#include <stdio.h>

int main()
{
    int year, month, flag = 0;
    printf("��������ݺ��·ݣ��Կո���:!\n");
    scanf("%d %d", &year, &month);
    if( ( year % 4 ==0 && year % 100 != 0 ) || year % 400 ==0)
    {
        flag = 1;
        printf("������������������\n"); 
    }
    else
    {
        flag = 0; 
        printf("���������������ƽ�꣡��\n");
    }
    switch(month) //switch���ڲ��Ա���ֵ��������Ӧ��� 
    {
        case 1:
            printf("�����������һ�¹�31��\n");
            break;
        case 2:
            if(flag == 1) 
                printf("����������Ƕ��¹�29��\n");
            else
                printf("����������Ƕ��¹�28��\n"); 
            break;
        case 3:
            printf("��������������¹�31��\n");
            break;
        case 4:
            printf("��������������¹�30��\n");
            break;
        case 5:
            printf("��������������¹�31��\n");
            break;
        case 6:
            printf("��������������¹�30��\n");
            break;
        case 7:
            printf("��������������¹�31��\n");
            break;
        case 8:
            printf("����������ǰ��¹�31��\n");
            break;
        case 9:
            printf("����������Ǿ��¹�30��\n");
            break;
        case 10:
            printf("�����������ʮ�¹�31��\n");
            break;
        case 11:
            printf("�����������ʮһ�¹�30��\n");
            break;
        case 12:
            printf("�����������ʮ���¹�31��\n");
            break;
    }
    return 0;
}

