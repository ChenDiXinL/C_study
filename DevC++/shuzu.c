#include<stdio.h> 

int i;
void printArray(int arr[], int size) {
    //����һ����ӡ����ĺ��� 
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]); // ������arr������ָ��ʹ��
    }
}

int main() {
    int myArray[5] = {10, 20, 30, 40, 50};
    printArray(myArray, 5); // �����������ݸ�����
    return 0;
}
