#include<stdio.h>
int main(){
   int num, n;
   int guess_num;
   int finish = 0;
   int cnt = 0;
   printf("input a number range from 1 to 100, let him guess:\n");
   scanf("%d", &num);
   printf("How many chances do you want to give him?(at least 3 chances)\n");
   scanf("%d", &n);
   if((num<1 && num>100) || n<3){
      do{
         scanf("%d", &guess_num);
         cnt++;
         if(guess_num<=0 || guess_num>100){
            printf("Mistake,Game Over");
            finish = 1;
         }else if(guess_num < num){
            printf("Too small");
         }else if(guess_num > num){
            printf("Too big");
         }else{
            if(guess_num == num){
               if(cnt<=3){
                  printf("Lucky you!");
               }else if(cnt>3){
                  printf("Good guess");
               }
            }
            finish = 1;
         }
         if(cnt == n){
            if(!finish){
               printf("Game Over");
               finish = 1;
            }
         }


      }while (!finish);
   }else{
      printf("error input");
   }
   
}