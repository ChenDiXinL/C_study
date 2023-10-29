#include<stdio.h>
int main()
{
    int hum, commodity_types, commodity_num, membership_grade, i;
    float commodity_price;
    float sum;
    int type = 0;

    printf("How many people?\n");
    scanf("%d", &hum);

    for(i=1; i<=hum; i++)
    {
        printf("Welcome,Here is the membership`s discount:\n");
        printf("======================================================================================\n");
        printf("membership_grade:  not member  common member  silver member  golden member  VIP member\n");
        printf("grade:                 0             1              2              3           4      \n");
        printf("discount:              1            0.98           0.95           0.93        0.90    \n");
        printf("======================================================================================\n");
        printf("What`s you membership grade?\n");
        scanf("%d", &membership_grade);

        if(membership_grade>4 || membership_grade<0)
        {
            printf("This grade is not exist\n");
            if(i<hum){
                printf("The next one ,please\n");
            }else{
                printf("Thank you");
            }
            printf("\n");
            continue;
        }

        printf("How many types?\n");
        scanf("%d", &commodity_types);

        while(commodity_types>0)
        {
            type++;
            printf("For type number %d:\n", type);
            printf("How many commodities?\n");
            scanf("%d", &commodity_num);

            printf("How much for each one?\n");
            scanf("%f", &commodity_price);

            sum = sum+commodity_num*commodity_price;
            commodity_types--;
        }
        switch (membership_grade)
        {
        case 0:
            sum = sum*1;
            break;
        case 1:
            sum = sum*0.98;
            break;
        case 2:
            sum = sum*0.95;
            break;
        case 3:
            sum = sum*0.93;
            break;
        case 4:
            sum = sum*0.90;
            break;
        default:
            break;
        }
        printf("You should pay %.2f yuan\n", sum);
        
        if(i<hum){
            printf("The next one ,please\n");
        }else{
            printf("Thank you");
        }
        printf("\n");

        sum = 0.0;
        type = 0;
    }
}