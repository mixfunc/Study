#include <stdio.h>

//int main()
//{
//	//sizeof是一个操作符，计算类型或变量的大小
//	int a = 10;
//	printf("%d\n", sizeof(int));
//	printf("%d\n", sizeof(a));
//	return 0;
//}

int main()
{	
	int arr[10] = { 0 };
	printf("%d\n", sizeof(arr)); //计算的是数组的总大小，单位是字节，10*4=40
	printf("%d\n", sizeof(arr[0])); //4

	int sz = sizeof(arr) / sizeof(arr[0]);
	printf("%d\n", sz); //10
	return 0;
}