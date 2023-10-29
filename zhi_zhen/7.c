#include <stdio.h>
 
const int MAX = 3;
 
int main ()
{
   int  var[] = {10, 100, 200};
   int  i, *ptr;
 
   /* ??????ã–ÌÞä­ã–?ã–Ü¿??Îm??????†¥?? */
   ptr = var;
   i = 0;
   while ( ptr <= &var[MAX - 1] )
   {
 
      printf("“³???µä?†¥??‡¥?var[%d] = %p\n", i, ptr );
      printf("“³???µä?ÅË??var[%d] = %d\n", i, *ptr );
 
      /* ??????ã–?ã–?ã–Ð¾??Î~? */
      ptr++;
      i++;
   }
   return 0;
}