#include<stdio.h>
//                                三者比大小
/*int main()
{
	//定义变量;
	int a, b, c, max;
	//输入三个整数
	scanf_s("%d %d %d", &a, &b, &c);
	max = a;
	if (b > max)
		max = b;
	if (c > max)
		max = c;
	printf("%d", max);

}
*/
//                            求分数
/*
int main()
{
	//输入
	int n;
	//输出
	int result;
	//接受输入
	scanf_s("%d", &n);
	//--数据处理--
	if (n <= 10)
		result = n * 6;
	else if (n < 20)
		result = 10 * 6 + (n - 10) * 2;
	else result = 10 * 6 + 10 * 2 + (n - 20) * 1;
	printf("%d", result);
}
*/
//                         上班走路还是骑车
/*
int main()
{
	//声明变量
	//输入
	int n;
	//负数表示骑车快，整数表示走路快，0表示一样快
	//--接受输入--
	double R;
	scanf_s("%d", &n);
	//--数据处理--
	R = (27 + 23 + n / 3.0) - (n / 1.2);
	//输出--
	//注意double 判断会有精度问题  ，不能直接判断 ==0
	if (R < 0.0001) printf("骑车");
	else if (R > 0.0001) printf("走路");
	else printf("一样快");
}
*/
