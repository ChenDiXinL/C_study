#include<stdio.h>
int main()
{
   int i, j, n;
   int a[100];

   scanf("%d", &n);
   for(i=n-1; i>=0; i--)
   {
      scanf("%d", &a[i]);
   }

   for(j=0; j<n; j++)
   {
      printf("%d ", a[j]);
   }
   return 0;

}