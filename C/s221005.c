#include <stdio.h>

//int main()
//{
//	//sizeof��һ�����������������ͻ�����Ĵ�С
//	int a = 10;
//	printf("%d\n", sizeof(int));
//	printf("%d\n", sizeof(a));
//	return 0;
//}

int main()
{	
	int arr[10] = { 0 };
	printf("%d\n", sizeof(arr)); //�������������ܴ�С����λ���ֽڣ�10*4=40
	printf("%d\n", sizeof(arr[0])); //4

	int sz = sizeof(arr) / sizeof(arr[0]);
	printf("%d\n", sz); //10
	return 0;
}