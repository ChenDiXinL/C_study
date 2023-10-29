/*数组：数组元素类型名 数组名【元素最大个数】*/
#include<stdio.h>
int main(){
   int n, i;
   int a[1000];
   scanf("%d", &n);
   for(i=0; i<n; i++)
      scanf("%d", &a[i]);

   for(i=n-1; i>=0; i--)
      printf("%d ", a[i]);

   printf("\n");
   return 0;
}