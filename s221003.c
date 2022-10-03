#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
#include <string.h>


//int main()
//{
//	printf("\a");
//	printf("%c\n", '\x30'); // 十进制为48，ASCII值对应'0'，\xdd 表示两个十六进制数，
//	printf("%d\n", strlen("abc")); // 3
//	printf("%d\n", strlen("c:\test\328\test.c")); // 8
//	return 0;
//}


//选择语句
//int main()
//{	
//	int input = 0;
//	printf("你要好好学习吗？>\n");
//	printf("如果是就按(1/0)?\n");
//	scanf("%d\n", &input);
//	if (input == 1)
//	{
//		printf("获得好offer\n");
//	}
//	else
//	{
//		printf("卖红薯\n");
//	}
//	return 0;
//}


//循环
//int main()
//{
//	int line = 0;
//	
//	while (line < 3000)
//	{
//		printf("敲代码:%d\n", line);
//		line++;
//	}
//	if (line == 3000)
//	{
//		printf("好offer\n");
//	}
//	return 0;
//}



//函数
//int Add(int x, int y)
//{
//	int z = 0;
//	z = x + y;
//	return z;
//}
//int main()
//{	
//	int num1 = 0;
//	int num2 = 0;
//	scanf("%d %d", &num1, &num2);
//	//int sum = num1 + num2;
//	//使用函数的方法
//	int sum = Add(num1, num2);
//	printf("%d\n", sum);
//}


//数组
int main()
{
	int arr[5] = {1,2,3,4,5};
	int i = 0;
	while (i < 5)
	{
		printf("%d ", arr[i]);
		i++;
	}
	//char ch[3] = { 'a', 'b' }; //不完全初始化，剩余的默认为0
	return 0;
}
