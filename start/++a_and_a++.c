#include <stdio.h>
 
int main()
{
   int c;
   int a = 10;
   c = a++; 
   printf("??????????\n");
   printf("Line 1 - c ????? %d\n", c );//先赋值，把10给c，后运算，a=11，就不再赋值了，所以c还是10
   printf("Line 2 - a ????? %d\n", a );
   a = 10;
   c = a--; 
   printf("Line 3 - c ????? %d\n", c );
   printf("Line 4 - a ????? %d\n", a );
 
   printf("??????????\n");
   a = 10;
   c = ++a; 
   printf("Line 5 - c ????? %d\n", c );//先运算，a=11，后赋值，把11给c
   printf("Line 6 - a ????? %d\n", a );
   a = 10;
   c = --a; 
   printf("Line 7 - c ????? %d\n", c );
   printf("Line 8 - a ????? %d\n", a );
 
}