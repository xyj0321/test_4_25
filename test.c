#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
//操作符
//算术操作符 + - * / %
//int main()
//{
//	int a = 10;
//	int b = 20;
//    int c = a + b;
//	int d = a - b;
//	int e = a*b;
//	int f = a / b;
//	int g = a%b;
//	int i = 0;
//	//printf("%d\n%d\n%d\n%d\n%d\n", c, d, e, f, g);
//	//%de的特点
//	while (i<=1000)
//	{
//		//int h = i % 9;//0 1 2 3 4 5 6 7 8 
//		//int h = i % 8;
//		int h = i / 8;//0 1 2 3 4 5 6……
//		printf("%d\n", h);
//		i++;
//	}
//	return 0;
//}

//移位操作符>>  <<
//int main()
//{
//	int a =-7;
//	int b = a >> 1;//0  //
//	int c = a << 1;//2  //2
//	
//	printf("%d\n%d\n", b,c);
//	return 0;
//}

////位操作符;&按位与 ，| 按位或， ^按位异或 ，针对二进制比特位
//int main()
//{
//	int a = 1;
//	int b = 3;
//	int c = a&b;
//	int d = a | b;
//	int e = a^b;
//	printf("%d\n", c);//1
//	printf("%d\n", d);//3
//	printf("%d\n", e);//2  相同为0，相异为1
//	return 0;
//}


////赋值操作符
////＝　＋＝　－＝　／＝　*＝　％＝　＜＜＝　　＞＞＝　＆＝　｜＝　＾＝
//int main()
//{
//	int a = 1;
//	a += 1;
//	return 0;
//}

//单目操作符 ！ - + & sizeof ~ -- ++  *  （）
/*int main()
{
	int a = 2;
	printf("%d\n", (char)a);
	int b = 20;
	printf("%d\n", -b);
	int c = 20;
	int*p = &c;
	printf("%p\n", &c);
	printf("%p\n", p);
	printf("%d\n", sizeof(a));
	printf("%d\n", ~a);
	return 0;
}*/
//int main()
//{
//	int a = 10;
//	//int b = a++;
//	int b = ++a;
//	printf("%d %d\n", a, b);//后置先使用，后++  ,前置先++，后使用
//	return 0;
//}

//关系操作符> < >= <= !=  ==
//逻辑操作符&&逻辑与   逻辑或||
//int main()
//{
//	int a = 10;
//	int b = 0;
//	int c = a||b;
//	printf("%d\n", c);
//	return 0;
//}
//条件操作符exp1?exp2:exp2
//int MAX(int a, int b)
//{
//	if (a > b)
//	{
//		return a;
//	}
//	else
//	{
//		return b;
//	}
//}
//int main()
//{
//	int a = 1;
//	int b = 8;
//	int max = (a >= b ? a : b);
//	//int max = MAX(a, b);
//	printf("%d\n", max);
//	return 0;
//}
//逗号表达式exp1;exp2;exp3;
//下标引用[]  ,函数调用（），结构体成员  .  ->
//typedef struct stu 
//{
//	int age;
//	char sex[10];
//	char name[10];
//}a;
//int main()
//{
//	a s = { 12, "女", "谢静怡" };
//	struct stu*p = &s;
//	printf("%s %d\n", p->name,p->age);
//	//printf("%d\n", s.age);
//	return 0;
//}


//常见关键字auto break case char int float double long longlong short const continue do else enum extern for goto if register return signed sizeof static struct switch typedef union void volatile while 
//typedef ,类型重命名
//typedef unsiged int unit_int;
//int main()
//{
//	
//	unit_int a = 2;
//	
//
//	return 0;
//
//}

//ststic
//修饰局部变量：静态局部变量//改变声明周期，出作用域依然存在
//void sum(int a)
//{
//	
//	static int b = 2;
//	b++;
//	printf("%d\n", a + b);//4 5 6 7 8
//}
//int main()
//{
//	int a = 1;
//	int i= 0;
//	while (i < 5)
//	{
//		sum(a);
//		i++;
//	}
//	return 0;
//}
////ststic 修饰全局变量,改变变量作用域，只能在其源文件内使用
//int main()
//{
//	extern int global;
//	printf("%d\n", global);
//	return 0;
//}

//ststic 修饰函数,改变作用域，只能在源文件使用
//int main()
//{
//	extern int Add(int x, int y);
//	int a = 20;
//	int s = 20;
//	int c = Add(a, s);
//	printf("%d\n", c);
//	return 0;
//}
//define 定义标识符常量，
#define MAX 20
//define 定义宏
//int Add(int x, int y)
//{
//	int c = x + y;
//	return c;
//}
#define Add(x,y,z)(x+y+z)//define 定义的宏无数据类型，后面()对应输入值
int main()
{
	int a = 10;
	int b = 20;
	int c = 10;
	printf("%d\n", Add(a, b,c));
	return 0;
}