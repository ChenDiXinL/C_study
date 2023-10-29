#include<stdio.h>
#include<string.h>

#define TRUE 1
#define FALSE 0

char num_Tab[14][3] = {
    "һ","��","��","��","��","��","��",
    "��","��","ʮ","��","ǧ","��","��"

};

int hasNums(char* s);

int main()
{
    char idioms[41];

    int i, n, hasNuminALL = FALSE;
    scanf("%d", &n);

    for(i=0; i<n; i++)
    {
        scanf("%s", idioms);
        if(hasNums(idioms) == TRUE){
            printf("%s\n", idioms);
            
            if(hasNuminALL == FALSE)
                hasNuminALL = TRUE;
        }
    }

    if(hasNuminALL == FALSE)
        printf("����������");

    return 0;
}

int hasNums(char* s)
{
    int i, j;
    int len = strlen(s);

    for(i=0; i<len; i+=2){
        for(j=0; j<14; j++){
            if(s[i] == num_Tab[j][0]
                && s[i+1] == num_Tab[j][1])
            return TRUE;
        }
    }

    return FALSE;
}

