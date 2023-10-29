#include<stdio.h>
int main(){
	int n, k;
	scanf("%d", &n);
	scanf("%d", &k);
	if(k=0){
	    printf("today is xin_qi %d", &n);
	}else if(k>0){
	    printf("After %d day xin_qi %d", k, (k+n)%7);
	}else{
	    printf("before %d day xin_qi %d", k, (n+k)%7+7);
    }
	return 0;
}