//如果不加这行，scanf函数会报错（vs2013以上）或者警告（vs2010版本）
//提示可以用scanf_s函数来代替，但是scanf_s这个函数只是vs编译器自己实现的，其他的c编译器（如gcc）并不认识，这样程序就没有跨平台性
//一劳永逸的方法，可以在vs的安装目录下找到\VC\vcprojectitems\newc++file.cpp这个文件，在其中把下面这段代码直接复制进去然后保存，等到再次创建新文件时文件中就会自动有这句话
#define _CRT_SECURE_NO_WARNINGS 1

//包含一个stdio.h的头文件
//std-标准
//io-input/output，输入输出
//stdio-标准输入输出，只要使用打印函数都要引用这个头文件
#include <stdio.h>

//全局变量的作用域是整个工程，生命周期也是整个程序，和main函数一样
//int global = 10;

//void test()
//{
//	printf("%d\n",global);//ok
//}
//int main()
//{
//	extern int g_val;//extern关键字是声明外部符号的
//	printf("%d",g_val);//g_val定义在其他的文件test02.c中
//	test();
//	{
//		int num = 20;//局部变量的作用域是包括自己的大括号里面，超出大括号销毁，生命周期也就结束了
//		printf("%d\n",num);//可以打印
//		printf("%d\n", global);//ok
//	}
//	//printf("%d\n", num);//会报错，找不到变量num
//	printf("%d\n", global);//ok
//	return 0;
//}

//int main()
//{
//	int num1 = 0;
//	int num2 = 0;
//	//c语言语法规定。变量要定义在代码块的最前面
//	int sum = 0;
//	scanf("%d%d",&num1,&num2);
//	
//	sum=num1 + num2;
//	printf("sum = %d\n", sum);
//	return 0;
//}

//局部变量与全局变量名字尽量不要相同，如果相同也不会报错
//int num = 10;//全局变量，定义在大括号外部，在数据区(静态区)开辟空间
//int main()
//{
//	int num = 20;//局部变量，定义在大括号内部,在栈中开辟空间
//	{
//		int num = 30;//
//		printf("%d\n", num);//30
//	}
//	printf("%d\n",num);//20，如果没有局部变量则会显示10
//	return 0;
//}

//int main()
//{
//	short age = 20;//向内存申请两个字节16位二进制位
//	float weight = 77.7f;//向内存申请四个字节32位二进制位
//	return 0;
//}

//各种类型所占的字节大小
//int main()
//{
//	printf("%d\n", sizeof(char));//1
//	printf("%d\n", sizeof(short));//2
//	printf("%d\n", sizeof(int));//4
//	printf("%d\n", sizeof(long));//4/8
//	printf("%d\n", sizeof(long long));//8
//	printf("%d\n", sizeof(float)); //4
//	printf("%d\n", sizeof(double));//8
//	return 0;
//}

//c语言都有什么类型
//int main()
//{
//	//char-字符类型
//	//short int-短整型
//	//int-整型
//	//long-长整形
//	//long long-更长的整型，C99标准引入的
//	//float-单精度浮点型
//	//double-双精度浮点型
//
//	//%d-打印整型
//	//%c-打印字符
//	//%f-打印单精度浮点数
//	//%lf-打印双精度浮点数
//	//%p-以地址方式打印
//	//%x-以16进制方式打印
//
//	//char ch = 'A';//定义一个char类型的变量
//	//printf("%c\n",ch);//%c-打印字符格式的数据
//	//int age = 20;
//	//printf("%d",age);//%d-打印整形十进制数据
//
//	//float f = 5.0;
//	//printf("%f\n",f);
//
//	//double d = 3.14;
//	//printf("%lf\n", d);
//	
//	return 0;
//}

//主函数-程序的入口，并且有且仅有一个
//int main()
//{
//	//打印函数-库函数，要使用库函数必须要包含对应的头文件
//	printf("hello world\n");
//	//函数的返回值，返回一个整型数值
//	return 0;
//}

//这种写法已经过时了
//void main()
//{
//
//}