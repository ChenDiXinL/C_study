#include <stdio.h>
 
const int MAX = 3;
 
int main ()
{
   int  var[] = {10, 100, 200};
   int  i, *ptr;
 
   /* ??????�����?�ܿ??�m??????��?? */
   ptr = var;
   i = 0;
   while ( ptr <= &var[MAX - 1] )
   {
 
      printf("��???��?��??��?var[%d] = %p\n", i, ptr );
      printf("��???��?��??var[%d] = %d\n", i, *ptr );
 
      /* ??????�?�?�о??�~? */
      ptr++;
      i++;
   }
   return 0;
}