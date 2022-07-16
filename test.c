#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

//struct S
//{
//	int a;
//	char c;
//	double d;
//};
//
////传值
//void Init(struct S* ps)
//{
//	ps->a = 100;
//	ps->c = 'w';
//	ps->d = 3.14;
//}
//
////传址
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

//位段
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
//	printf("%d", sizeof(s));//8个字节
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

//枚举
//enum Sex
//{
//	//枚举的可能取值
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

//联合 - 联合体 - 共用体
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

//实现判断大小端
//法1
//int check_sys()
//{
//  int a=1;
//  //返回1小端
//	//返回0大端
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
//		printf("小端\n");
//	}
//	else
//	{
//		printf("%大端\n");
//	}
//
//	return 0;
//}
//法2
//int check_sys()
//{
//	union Un
//	{
//		char c;
//		int i;
//	}u;
//	u.i = 1;
//	//返回1小端
//	//返回0大端
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
//		printf("小端\n");
//	}
//	else
//	{
//		printf("%大端\n");
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