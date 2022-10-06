#include <stdio.h>

//int main()
//{
//	int a = 0;
//	printf("%d\n", ~a); //~按位取反，把所有二进制中，数字1变成0,0变成1，整数在内存中存储的是补码，一个整数的二进数表示有三种：原码、反码、补码
//	return 0;
//}

//int main()
//{
//	int a = 10;
//	int b = ++a; //前置++，先++，后使用
//	printf("%d\n", b); //11
//	printf("%d\n", a); //11
//	return 0;
//}

//int main()
//{
//	int a = 10;
//	int b = a++; //后置++，先使用，后++
//	printf("%d\n", b); //10
//	printf("%d\n", a); //11
//	return 0;
//}

//int main()
//{
//	//强制类型转换
//	int a = (int)3.14;
//	printf("%d\n", a);
//	return 0;
//}

//int main()
//{
//	int a = 5;
//	int b = 3;
//	int max = 0;
//	//if (a > b)
//	//{
//	//	max = a;
//	//}
//	//else {
//	//	max = b;
//	//}
//	max = a > b ? a : b;
//	printf("%d\n", max);
//	return 0;
//}

//int main()
//{
//	int a = 0;
//	int b = 3;
//	int c = 5;	
//	int d = (a = b + 2, c = a - 4, b = c + 2);//a=5, c=1, b=3
//	//逗号表达式是从左向右依次计算的，整个表达式的结果是最后一个表达式的结果
//	printf("%d\n", d);
//	return 0;
//}

//下标引用操作符
//int main()
//{
//	int arr[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
//	printf("%d\n", arr[5]);//[]叫做下标引用操作符
//	return 0;
//}

//函数调用操作符
int main()
{
	//函数调用的时候，函数名后面的()，就是函数调用操作符
	printf("hello\n");
	printf("%d\n", 100);
	return 0;
}