#include<stdio.h>
int main(){
	int i, j;
	i = 1;
	while(i <= 9){
		j = 1;
		while(j <= i){
			printf("%d * %d = %d\t", i, j, i*j);
            printf("  ");
            j++;
		}
		printf("\n");
		i++;
	}
	return 0;
}