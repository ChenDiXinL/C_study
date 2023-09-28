#include<stdio.h>
int main(){
	int n, k, m;
	scanf("%d%d", &n, &k);
	if(k<0)
	    m = -((-k)%7);
	else
	    m = k%7;
	    
	printf("%d", (7+m+n)%7);
	return 0;
}
