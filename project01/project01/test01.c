//����������У�scanf�����ᱨ��vs2013���ϣ����߾��棨vs2010�汾��
//��ʾ������scanf_s���������棬����scanf_s�������ֻ��vs�������Լ�ʵ�ֵģ�������c����������gcc��������ʶ�����������û�п�ƽ̨��
//һ�����ݵķ�����������vs�İ�װĿ¼���ҵ�\VC\vcprojectitems\newc++file.cpp����ļ��������а�������δ���ֱ�Ӹ��ƽ�ȥȻ�󱣴棬�ȵ��ٴδ������ļ�ʱ�ļ��оͻ��Զ�����仰
#define _CRT_SECURE_NO_WARNINGS 1

//����һ��stdio.h��ͷ�ļ�
//std-��׼
//io-input/output���������
//stdio-��׼���������ֻҪʹ�ô�ӡ������Ҫ�������ͷ�ļ�
#include <stdio.h>

//ȫ�ֱ��������������������̣���������Ҳ���������򣬺�main����һ��
//int global = 10;

//void test()
//{
//	printf("%d\n",global);//ok
//}
//int main()
//{
//	extern int g_val;//extern�ؼ����������ⲿ���ŵ�
//	printf("%d",g_val);//g_val�������������ļ�test02.c��
//	test();
//	{
//		int num = 20;//�ֲ��������������ǰ����Լ��Ĵ��������棬�������������٣���������Ҳ�ͽ�����
//		printf("%d\n",num);//���Դ�ӡ
//		printf("%d\n", global);//ok
//	}
//	//printf("%d\n", num);//�ᱨ���Ҳ�������num
//	printf("%d\n", global);//ok
//	return 0;
//}

//int main()
//{
//	int num1 = 0;
//	int num2 = 0;
//	//c�����﷨�涨������Ҫ�����ڴ�������ǰ��
//	int sum = 0;
//	scanf("%d%d",&num1,&num2);
//	
//	sum=num1 + num2;
//	printf("sum = %d\n", sum);
//	return 0;
//}

//�ֲ�������ȫ�ֱ������־�����Ҫ��ͬ�������ͬҲ���ᱨ��
//int num = 10;//ȫ�ֱ����������ڴ������ⲿ����������(��̬��)���ٿռ�
//int main()
//{
//	int num = 20;//�ֲ������������ڴ������ڲ�,��ջ�п��ٿռ�
//	{
//		int num = 30;//
//		printf("%d\n", num);//30
//	}
//	printf("%d\n",num);//20�����û�оֲ����������ʾ10
//	return 0;
//}

//int main()
//{
//	short age = 20;//���ڴ����������ֽ�16λ������λ
//	float weight = 77.7f;//���ڴ������ĸ��ֽ�32λ������λ
//	return 0;
//}

//����������ռ���ֽڴ�С
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

//c���Զ���ʲô����
//int main()
//{
//	//char-�ַ�����
//	//short int-������
//	//int-����
//	//long-������
//	//long long-���������ͣ�C99��׼�����
//	//float-�����ȸ�����
//	//double-˫���ȸ�����
//
//	//%d-��ӡ����
//	//%c-��ӡ�ַ�
//	//%f-��ӡ�����ȸ�����
//	//%lf-��ӡ˫���ȸ�����
//	//%p-�Ե�ַ��ʽ��ӡ
//	//%x-��16���Ʒ�ʽ��ӡ
//
//	//char ch = 'A';//����һ��char���͵ı���
//	//printf("%c\n",ch);//%c-��ӡ�ַ���ʽ������
//	//int age = 20;
//	//printf("%d",age);//%d-��ӡ����ʮ��������
//
//	//float f = 5.0;
//	//printf("%f\n",f);
//
//	//double d = 3.14;
//	//printf("%lf\n", d);
//	
//	return 0;
//}

//������-�������ڣ��������ҽ���һ��
//int main()
//{
//	//��ӡ����-�⺯����Ҫʹ�ÿ⺯������Ҫ������Ӧ��ͷ�ļ�
//	printf("hello world\n");
//	//�����ķ���ֵ������һ��������ֵ
//	return 0;
//}

//����д���Ѿ���ʱ��
//void main()
//{
//
//}