#include<stdio.h>
int main(){
	int n, i, quyu, a, k;
	int sum = 0;
	printf("What number of daffodils do you want?\n");
	scanf("%d", &n);
	printf("Here are the daffodils of %d-digit number", n);
	if(n>=3 && n<=7){
		for(i = 10^(n-1); i < 10^n; i++){
			for(quyu = 1; quyu <= n; quyu++){
				k = i;
				a = k%10;
				k = k/10;
				sum = sum + a*a;
				if(sum == i){
					printf("%d\n", i);
				}
			}
		}
	}
}
