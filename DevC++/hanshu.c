#include<stdio.h>
#include<stdlib.h>
void f(int a){
	printf("�ڱ����ú���f�����У���ֵ���ִ��ǰ���β�a��ֵΪ%d\n", a);
	a = 0;
	printf("�ڱ����ú���f�����У���ֵ���ִ�к��β�a��ֵΪ%d\n", a);
}

/*f()������main()֮��Ϊʲô*/

int main(){
	int a = 12;
	printf("��������main�У�����f(a)֮ǰ��ʵ��a��ֵΪ%d\n", a);
	f(a);
	printf("��������main�У�����f(a)֮��ʵ��a��ֵΪ%d\n", a); 
	return 0;
}



