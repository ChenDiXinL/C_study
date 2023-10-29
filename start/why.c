#include<stdio.h>
#include<string.h>

char c[300];
int main()
{
    int ans=0;
    while(scanf("%s",c+1)==1)
    {
        ans+=strlen(c+1);
    }
    printf("%d",ans);
    return 0;
}