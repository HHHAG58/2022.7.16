#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

//struct S
//{
//	int a;
//	char c;
//	double d;
//};
//
////��ֵ
//void Init(struct S* ps)
//{
//	ps->a = 100;
//	ps->c = 'w';
//	ps->d = 3.14;
//}
//
////��ַ
//void Print1(struct S tmp)
//{
//	printf("%d %c %lf\n", tmp.a, tmp.c, tmp.d);
//}
//
//void Print2(struct S* ps)
//{
//	printf("%d %c %lf\n", ps->a, ps->c, ps->d);
//
//}
//
//int main()
//{
//	struct S s = { 0 };
//	Init(&s);
//	Print1(s);
//	Print2(&s);
//
//	return 0;
//}

//λ��
#include <stdio.h>

//struct S
//{
//	int a : 2;
//	int b : 5;
//	int c : 10;
//	int d : 30;
//};
//
//int main()
//{
//	struct S s;
//	printf("%d", sizeof(s));//8���ֽ�
//	return 0;
//}

//struct S
//{
//	char a : 3;
//	char b : 4;
//	char c : 5;
//	char d : 4;
//};
//
//int main()
//{
//	struct S s = { 0 };
//
//	s.a = 10;
//	s.b = 20;
//	s.c = 3;
//	s.d = 4;
//	return 0;
//}

//ö��
//enum Sex
//{
//	//ö�ٵĿ���ȡֵ
//	MALE,
//	FEMALE,
//	SECRET
//};
//
//enum Color
//{
//	RED,
//	GREEN,
//	BLUE
//};
//
//int main()
//{
//	//enum Sex s = MALE;
//	//enum Color c = BLUE;
//	//printf("%d %d %d\n", RED, GREEN, BLUE);
//
//	return 0;
//}

//���� - ������ - ������
//union Un
//{
//	char c;
//	int i;
//};
//
//int main()
//{
//	union Un u;
//	printf("%d\n", sizeof(u));
//
//	printf("%p\n", &u);
//	
//	printf("%p\n", &(u.c));
//	printf("%p\n", &(u.i));
//	return 0;
//}

//ʵ���жϴ�С��
//��1
//int check_sys()
//{
//  int a=1;
//  //����1С��
//	//����0���
//	return *(char*)&a;
//}
//
//int main()
//{
//	int a = 1;
//	int ret = check_sys();
//
//	if (1 == ret)
//	{
//		printf("С��\n");
//	}
//	else
//	{
//		printf("%���\n");
//	}
//
//	return 0;
//}
//��2
//int check_sys()
//{
//	union Un
//	{
//		char c;
//		int i;
//	}u;
//	u.i = 1;
//	//����1С��
//	//����0���
//	return u.c;
//}
//
//int main()
//{
//	int a = 1;
//	int ret = check_sys();
//	
//	if (1 == ret)
//	{
//		printf("С��\n");
//	}
//	else
//	{
//		printf("%���\n");
//	}
//
//	return 0;
//}

union Un
{
	int a;
	char arr[5];
};

int main()
{
	union Un u;
	printf("%d\n", sizeof(u));

	return 0;
}