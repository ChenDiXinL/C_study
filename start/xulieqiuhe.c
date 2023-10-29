/*翁恺C语言，6.1.6*/

#include<stdio.h>
int main(){
   double fen_zi, fen_mu;
   double sum = 0.0;
   int i, n;
   double t;
   printf("How many terms?\n");
   scanf("%d", &n);
   fen_zi = 2;
   fen_mu = 1;
   for(i=1; i<=n; i++){     
      sum += fen_zi/fen_mu;
      t = fen_zi;/*t是前一项分子*/
      fen_zi = fen_zi + fen_mu;
      fen_mu = t;/*分母是前一项分子*/    

   }
   printf("%.2f\n", sum);
   return 0;

}