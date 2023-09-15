#include<stdio.h>
int main(){
	int a, i, j, k;
	int cnt = 0;
	printf("input a number range from 1 to 6:\n");
	scanf("%d", &a);
	printf("The set of integers for the given condition is as follows:\n");
	if(a<=6 && a>=1){
	    for(i = a; i <= a+3; i++)
		{
			for(j = a; j <= a+3; j++)
			{
				for(k = a; k <= a+3; k++){					
					if(i != k && i != j && k != j){					
						cnt++;					    
						printf("%d%d%d\t", i, j, k);
						if(cnt == 6){
							printf("\n");
							cnt = 0;
						}else{
							printf(" ");
						}
					}
				}
			}
		}
	}else{
		printf("error input");
	}
} 
