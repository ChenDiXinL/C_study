#include<stdio.h>
#include<stdlib.h>
void f(int a){
	printf("在被调用函数f（）中，赋值语句执行前，形参a的值为%d\n", a);
	a = 0;
	printf("在被调用函数f（）中，赋值语句执行后，形参a的值为%d\n", a);
}

/*f()不能在main()之后，为什么*/

int main(){
	int a = 12;
	printf("在主函数main中，调用f(a)之前，实参a的值为%d\n", a);
	f(a);
	printf("在主函数main中，调用f(a)之后，实参a的值为%d\n", a); 
	return 0;
}



