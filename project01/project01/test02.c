#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
#include <string.h>

//int g_val = 2021;//extern�ؼ��ֿ��Դ��ⲿ�ļ������������
//auto�ؼ��֣����Զ��������ٵ���˼���ֲ�����ǰ��Ӧ�ö�������ؼ��֣���������Ϊ�������Ծ�ʡ����
//{
//	auto int a=10;
//}

int main()
{
	char ch = 'w';
	//ָ���������char*��������pc
	char* pc = &ch;
	printf("%d\n",sizeof(pc));//4
	*pc = 'a';
	printf("%c\n",ch);
	return 0;
}

//ָ��
//int main()
//{
//	int a = 10;
//ָ���������int*��������p
//	int* p=&a;
//	printf("%p\n",&a);
//	printf("%p\n", p);
//	*p=20;
//	printf("%d\n", a);
//	return 0;
//}

//�����ʶ����
//#define MAX 100
//�����
//#define MAX(X,Y) (X>Y?X:Y)
//����ʵ��
//int Max(int a,int b)
//{
//	return a > b ? a : b;
//}
//int main()
//{
//	//int a = MAX;
//	int a = 10;
//	int b = 20;
//	//������ʽ
//	int max = Max(a,b);
//	printf("%d\n",max);
//	//��ķ�ʽ
//	max = MAX(a,b);
//	printf("%d\n", max);
//	return 0;
//}
	
//static���ξֲ��������ֲ��������������ڱ䳤��
//static����ȫ�ֱ������ı���ȫ�ֱ��������򣬾�̬ȫ�ֱ���ֻ�����Լ����ڵ�Դ�ļ���ʹ��
//static���κ�������̬����,�ı��˺������������ԣ����ⲿ���ӣ�������Դ�ļ��������ĺ�������ȫ�ֱ�����ֻҪ�ڱ��ļ�������Ϳ���ʹ�ã�������ڲ�����
//Ҫʹ���ⲿ�����ͺ�ȫ�ֱ���һ��Ҫͨ��extern�ؼ��ֽ�������
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
//	//typedef - �����ض���
//	typedef unsigned int u_int;//�����unsigned int��������������ֽ�u_int
//	u_int num = 20;
//	return 0;
//}

//int main()
//{
//	register int a = 10;//�Ĵ����ؼ��֣�����ؼ����ǽ��飨������һ��������ȡ���ڱ�����������������ŵ��Ĵ����У�������߷����ٶ�
//	return 0;
//}

//int Add(int a,int b)
//{
//	return a + b;
//}
//int main()
//{
//	int arr[10] = { 0 };
//	arr[3];//[] - �±����ò�����
//	int a = 10;
//	int b = 20;
//	int sum=Add(a,b);//()�������ò�����
//	return 0;
//}

//int main()
//{
//	//��0Ϊ��
//	int a = 0;
//	int b = 3;
//	//int c = a&&b;//false
//	int c = a || b;//true
//	printf("%d\n",c);
//	if (NULL)//NULL��false
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
//	//~�Ƕ����ư�λȡ��
//	//1111 1111 1111 1111 1111 1111 1111 1111
//	int b = ~a;//-1
//	printf("%d\n",b);
//	return 0;
//}

//������
//int main()
//{
	//�Ӽ��˳�ȡģ
	//int a = 10;
	//int b = 3;
	//int c = a / b;//3
	//int d = a % b;//1
	//printf("%d %d\n",c,d);
	//��λ������
	//int����һ��ռ32λ��0000 0000 0000 0000 0000 0000 0000 0011
	//int a = 3;
	//a��32λ���������ƶ���λ�������������λ�����ұ߲�������������λ������0���
	//00 0000 0000 0000 0000 0000 0000 0000 11 00
	//int b = a << 2;//a�����Ķ����������ƶ�2λ
	//��λ������ʹa�������仯�����ǰѵõ���ֵ���¸�ֵ��a����
	//printf("%d %d\n",a, b);//3 12
	//λ��������&��|��^
	//0000 0011
	//int a = 3;
	//0000 0101
	//int b = 5;
	//0000 0001
	//��Ӧ�Ķ�����λҪ����1���ؾ���1���������0
	//int c = a&b;//1
	//0000 0111
	//int c = a|b;//7
	//0000 0110
	//int c = a^b;//6
	//printf("%d\n",c);
	//��ֵ��������=,+=,-=,*=,/=,%=,&=,|=,^=,<<=,>>=
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
	//printf("%d\n", sizeof(arr));//40�ֽ�
	//printf("%d\n",sizeof(a));//4�ֽ�
	//printf("%d\n", sizeof(int));//4�ֽ�
	//printf("%d\n", sizeof a);//����ʡ������
	//printf("%d\n", sizeof int);//err
	//printf("%d\n", sizeof(arr)/sizeof(int));//10��Ԫ��
	//return 0;
//}

//����
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

//����
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

//��֧��ѭ��
//int main()
//{
//	int line = 0;
//	while (line<2000)
//	{
//		printf("д���룺>%d\n",line);
//		line++;
//	}
//	if (line>=2000)
//	{
//		printf("�ù���\n");
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

//ת���ַ�
//\0�Ǵ���˽��Ƶ�ת���ַ���Ӧʮ���Ƶ�ascii����0����0����������ַ�0��Ӧ��ascii����48
//int main()
//{
//	//\32�������˽������֣�������ʮ����26����Ӧ��ascii����ַ�����һ�����ҵļ�ͷ
//	printf("%d\n",strlen("d:\test\32\test.c"));
//	printf("\32");
//	//printf("\382");//�����ϱ�׼��\�����ǰ˽���ÿλ���ֲ��ܳ���8
//	printf("%c\n",'\x61');//\x�������ʮ����������
//	return 0;
//}

//ת���ַ�
//int main()
//{
//	printf("abcn");//û�л��е�Ч��
//	printf("abc\n");//\n�л��е�Ч��
//	printf("d:\test\test.c");//\t��ת���ַ����Ʊ��
//	//t��һ����ͨ�ַ���\��ת�����ã�\t���ǰ�t��ĸת���һ����ո�tab��������\\t����˼���ǰ��ұ߷�б�ܵ�ת����˼��ת���ȥ���е㸺����������˼��������t�ֱ����ͨ�ַ�t��
//	printf("d:\\test\test.c");
//	printf("%c\n",'\'');//ת�嵥����
//	printf("\"");//ת��˫����
//	return 0;
//}

//int main()
//{
//	//'\0'-0
//	//'a'-97
//	//'A'-65
//	//"abcdef"-�ַ���
//	//""-���ַ���
//	//"abc"-'a','b','c','\0',��4��Ԫ�أ��ַ�'\0'��������0���ַ��������ı�־
//	char arr1[] = "abc";
//	printf("%d\n",strlen(arr1));//3�������ַ����ĳ���,'\0'�������ַ����ĳ���
//	//������Ԫ�أ����û��'\0'
//	char arr2[] = {'a','b','c'};
//	printf("%d\n", strlen(arr2));//���ֵ
//	printf("%s\n",arr1);
//	printf("%s\n", arr2);
//	return 0;
//}

//��4�֣�ö�ٳ���
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
////MALE,FEMALE,SECRET��ö�ٳ���
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

//��3�֣�#define����ı�ʶ������
//#define MAX 10
//int main()
//{
//	int arr[MAX] = { 0 };
//	printf("%d\n",MAX);
//	return 0;
//}

//int main()
//{
//	const int n = 10;//��2�֣�������
//	//int arr[n] = {0};//��ʹnͨ��const���Σ���ֻ���г��������ԣ�ֵ���ܸı䣩�����ʻ��Ǳ���
//	//n = 20;//������ֵ���ܱ��޸�
//					 
//					 //const���εı���,��������const����ʱ�Ͳ��ܱ��ı��ˣ�num��ʱ�г�����
//	const int num = 4;//��1�֣�4�������泣�������ܱ��ı�
//	printf("%d\n",num);
//	
//	//num = 8;//num�ǳ����������ܱ��ı�
//	printf("%d\n", num);
//	return 0;
//}

