#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
#include <string.h>


//int main()
//{
//	printf("\a");
//	printf("%c\n", '\x30'); // ʮ����Ϊ48��ASCIIֵ��Ӧ'0'��\xdd ��ʾ����ʮ����������
//	printf("%d\n", strlen("abc")); // 3
//	printf("%d\n", strlen("c:\test\328\test.c")); // 8
//	return 0;
//}


//ѡ�����
//int main()
//{	
//	int input = 0;
//	printf("��Ҫ�ú�ѧϰ��>\n");
//	printf("����ǾͰ�(1/0)?\n");
//	scanf("%d\n", &input);
//	if (input == 1)
//	{
//		printf("��ú�offer\n");
//	}
//	else
//	{
//		printf("������\n");
//	}
//	return 0;
//}


//ѭ��
//int main()
//{
//	int line = 0;
//	
//	while (line < 3000)
//	{
//		printf("�ô���:%d\n", line);
//		line++;
//	}
//	if (line == 3000)
//	{
//		printf("��offer\n");
//	}
//	return 0;
//}



//����
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
//	//ʹ�ú����ķ���
//	int sum = Add(num1, num2);
//	printf("%d\n", sum);
//}


//����
int main()
{
	int arr[5] = {1,2,3,4,5};
	int i = 0;
	while (i < 5)
	{
		printf("%d ", arr[i]);
		i++;
	}
	//char ch[3] = { 'a', 'b' }; //����ȫ��ʼ����ʣ���Ĭ��Ϊ0
	return 0;
}
