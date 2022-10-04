#include<stdio.h>
#include<stdlib.h>
//                                        求个十百位
/*int main()
{
	//定义变量，输入一个数
	int a;
	//输入数的个十百位
	int r1, r2, r3;
	scanf_s("%d", &a);
	r1 = a % 10; //个位
	r2 = a / 10 % 10;//十位
	r3 = a / 100;//百位
	printf("%d\n%d\n%d\n", r3, r2, r1);
	return 0;
}
*/
//                               面积之差
/*
int main()
{
	//常变量不允许在赋值
	const  double PI = 3.14;
	//定义变量，输入一个数
	int a;
	//定义圆的面积，正方形的面积
	double squ_s, cir_s;
	//定义结果
	double result;
	scanf_s("%d", &a);
	squ_s = a * a;
	cir_s = a * a * PI / 4;
	result = squ_s - cir_s;
	printf("%.2lf", result);

}
*/