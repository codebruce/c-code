#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
#include <string.h>

//int g_val = 2021;//extern关键字可以从外部文件引入这个变量
//auto关键字，是自动创建销毁的意思，局部变量前面应该都有这个关键字，但正是因为都有所以就省略了
//{
//	auto int a=10;
//}

int main()
{
	char ch = 'w';
	//指针的类型是char*，名字是pc
	char* pc = &ch;
	printf("%d\n",sizeof(pc));//4
	*pc = 'a';
	printf("%c\n",ch);
	return 0;
}

//指针
//int main()
//{
//	int a = 10;
//指针的类型是int*，名字是p
//	int* p=&a;
//	printf("%p\n",&a);
//	printf("%p\n", p);
//	*p=20;
//	printf("%d\n", a);
//	return 0;
//}

//定义标识常量
//#define MAX 100
//定义宏
//#define MAX(X,Y) (X>Y?X:Y)
//函数实现
//int Max(int a,int b)
//{
//	return a > b ? a : b;
//}
//int main()
//{
//	//int a = MAX;
//	int a = 10;
//	int b = 20;
//	//函数方式
//	int max = Max(a,b);
//	printf("%d\n",max);
//	//宏的方式
//	max = MAX(a,b);
//	printf("%d\n", max);
//	return 0;
//}
	
//static修饰局部变量，局部变量的生命周期变长了
//static修饰全局变量，改变了全局变量作用域，静态全局变量只能在自己所在的源文件中使用
//static修饰函数，静态函数,改变了函数的链接属性，由外部链接（在其他源文件中声明的函数或者全局变量，只要在本文件中引入就可以使用）变成了内部链接
//要使用外部函数就和全局变量一样要通过extern关键字进行声明
//extern int Add(int, int);
//int main()
//{
//	int a = 10;
//	int b = 20;
//	int sum = Add(a,b);
//	printf("%d\n",sum);
//	return 0;
//}
	
//void test()
//{
//int a = 1;
//	static int a = 1;
//	a++;
//	printf("%d\n",a);
//}
//int main()
//{
//	int i = 0;
//	extern int g_val;
//	printf("%d\n",g_val);
//	while (i<5)
//	{
//		test();
//		i++;
//	}
//	return 0;
//}

//int main()
//{
//	//typedef - 类型重定义
//	typedef unsigned int u_int;//就像把unsigned int类型重新起个名字叫u_int
//	u_int num = 20;
//	return 0;
//}

//int main()
//{
//	register int a = 10;//寄存器关键字，这个关键字是建议（并不是一定，具体取决于编译器）把这个变量放到寄存器中，可以提高访问速度
//	return 0;
//}

//int Add(int a,int b)
//{
//	return a + b;
//}
//int main()
//{
//	int arr[10] = { 0 };
//	arr[3];//[] - 下标引用操作符
//	int a = 10;
//	int b = 20;
//	int sum=Add(a,b);//()函数调用操作符
//	return 0;
//}

//int main()
//{
//	//非0为真
//	int a = 0;
//	int b = 3;
//	//int c = a&&b;//false
//	int c = a || b;//true
//	printf("%d\n",c);
//	if (NULL)//NULL是false
//	{
//		printf("true\n");
//	}
//	else
//	{
//		printf("false\n");
//	}
//	return 0;
//}

//int main()
//{
//	int a = (int)3.14;//3
//	return 0;
//}

//int main()
//{
//	int a = 10;
//	//int b = a++;
//	int b = ++a;
//	printf("%d %d\n",a,b);
//	return 0;
//}

//int main()
//{
//	//0000 0000 0000 0000 0000 0000 0000 0000
//	int a = 0;
//	//~是二进制按位取反
//	//1111 1111 1111 1111 1111 1111 1111 1111
//	int b = ~a;//-1
//	printf("%d\n",b);
//	return 0;
//}

//操作符
//int main()
//{
	//加减乘除取模
	//int a = 10;
	//int b = 3;
	//int c = a / b;//3
	//int d = a % b;//1
	//printf("%d %d\n",c,d);
	//移位操作符
	//int类型一共占32位，0000 0000 0000 0000 0000 0000 0000 0011
	//int a = 3;
	//a的32位整体向左移动两位，最左边舍弃两位，最右边补齐两个二进制位并且用0填充
	//00 0000 0000 0000 0000 0000 0000 0000 11 00
	//int b = a << 2;//a变量的二进制向左移动2位
	//移位并不会使a本身发生变化，除非把得到的值重新赋值给a变量
	//printf("%d %d\n",a, b);//3 12
	//位操作符，&，|，^
	//0000 0011
	//int a = 3;
	//0000 0101
	//int b = 5;
	//0000 0001
	//对应的二进制位要都是1返回就是1，否则就是0
	//int c = a&b;//1
	//0000 0111
	//int c = a|b;//7
	//0000 0110
	//int c = a^b;//6
	//printf("%d\n",c);
	//赋值操作符，=,+=,-=,*=,/=,%=,&=,|=,^=,<<=,>>=
	//int a = 10;
	//a = a + 10;
	//a += 10;
	//a = a & 2;
	//a &= 2;
	//int a = 0;
	//printf("%d\n",a);
	//printf("%d\n", !a);//1
	//int a = 0;
	//int arr[10] = {0};
	//printf("%d\n", sizeof(arr));//40字节
	//printf("%d\n",sizeof(a));//4字节
	//printf("%d\n", sizeof(int));//4字节
	//printf("%d\n", sizeof a);//可以省略括号
	//printf("%d\n", sizeof int);//err
	//printf("%d\n", sizeof(arr)/sizeof(int));//10个元素
	//return 0;
//}

//数组
//int main()
//{
//	int arr[10] = {1,2,3,4,5,6,7,8,9,10};
//	//printf("%d\n",arr[3]);//4
//	int i = 0;
//	while (i<10)
//	{
//		printf("%d\n", arr[i]);
//		i++;
//	}
//	/*char ch[20] = {0};
//	float arr2[10] = { 0.0 };*/
//	return 0;
//}

//函数
//int Add(int x, int y)
//{
//	int z = x + y;
//	return z;
//}
//int main()
//{
//	int num1 = 10;
//	int num2 = 20;
//	int sum = 0;
//	int a = 100;
//	int b = 200;
//	//sum = num1 + num2;
//	sum = Add(num1,num2);
//	//sum = a + b;
//	sum = Add(a, b);
//	printf("%d\n",sum);
//	return 0;
//}

//分支和循环
//int main()
//{
//	int line = 0;
//	while (line<2000)
//	{
//		printf("写代码：>%d\n",line);
//		line++;
//	}
//	if (line>=2000)
//	{
//		printf("好工作\n");
//	}
//	/*int num = 0;
//	scanf("%d",&num);
//	if (num==1)
//	{
//
//	}
//	else
//	{
//
//	}*/
//	return 0;
//}

//转义字符
//\0是代表八进制的转义字符对应十进制的ascii码是0，‘0’这个代表字符0对应的ascii码是48
//int main()
//{
//	//\32是两个八进制数字，代表是十进制26所对应的ascii码的字符，是一个向右的箭头
//	printf("%d\n",strlen("d:\test\32\test.c"));
//	printf("\32");
//	//printf("\382");//不符合标准，\后面是八进制每位数字不能超过8
//	printf("%c\n",'\x61');//\x后面代表十六进制数字
//	return 0;
//}

//转义字符
//int main()
//{
//	printf("abcn");//没有换行的效果
//	printf("abc\n");//\n有换行的效果
//	printf("d:\test\test.c");//\t是转义字符，制表符
//	//t是一个普通字符，\有转义作用，\t就是把t字母转义成一个大空格（tab键），而\\t的意思就是把右边反斜杠的转义意思再转义回去（有点负负得正的意思），所以t又变成普通字符t了
//	printf("d:\\test\test.c");
//	printf("%c\n",'\'');//转义单引号
//	printf("\"");//转义双引号
//	return 0;
//}

//int main()
//{
//	//'\0'-0
//	//'a'-97
//	//'A'-65
//	//"abcdef"-字符串
//	//""-空字符串
//	//"abc"-'a','b','c','\0',有4个元素，字符'\0'或者数字0是字符串结束的标志
//	char arr1[] = "abc";
//	printf("%d\n",strlen(arr1));//3，计算字符串的长度,'\0'不算做字符串的长度
//	//有三个元素，最后没有'\0'
//	char arr2[] = {'a','b','c'};
//	printf("%d\n", strlen(arr2));//随机值
//	printf("%s\n",arr1);
//	printf("%s\n", arr2);
//	return 0;
//}

//第4种，枚举常量
//enum Color
//{
//	RED,
//	YELLOW=3,
//	BLUE
//};
//enum Sex
//{
//	MALE,
//	FEMALE,
//	SECRET
//};
////MALE,FEMALE,SECRET是枚举常量
//int main()
//{
//	//enum Sex s = MALE;
//	enum Color color = BLUE;
//	color = YELLOW;
//	printf("%d\n", MALE);//0
//	printf("%d\n", FEMALE);//1
//	printf("%d\n", SECRET);//2
//
//	printf("%d\n", BLUE);//0
//	printf("%d\n", YELLOW);//3
//	printf("%d\n", BLUE);//4
//	return 0;
//}

//第3种，#define定义的标识符常量
//#define MAX 10
//int main()
//{
//	int arr[MAX] = { 0 };
//	printf("%d\n",MAX);
//	return 0;
//}

//int main()
//{
//	const int n = 10;//第2种，常变量
//	//int arr[n] = {0};//即使n通过const修饰，但只是有常量的属性（值不能改变），本质还是变量
//	//n = 20;//常变量值不能被修改
//					 
//					 //const修饰的变量,当变量被const修饰时就不能被改变了，num此时叫常变量
//	const int num = 4;//第1种，4就是字面常量，不能被改变
//	printf("%d\n",num);
//	
//	//num = 8;//num是常变量，不能被改变
//	printf("%d\n", num);
//	return 0;
//}

