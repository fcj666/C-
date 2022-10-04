#include<stdio.h>
//求学长平均年龄
/*
int main()
{
	//定义变量   临时记录变量，学长的年龄总和
	int n,temp = 0;
	double age = 0;
	//--接受输入--
	//注意这里age+=temp,也就存储了所以学长年龄的和
	scanf_s("%d", &n);
	for (int i = 0; i < n; i++)
	{
		scanf_s("%d", &temp);
		age += temp;
	}
	//数据处理--
	age /= n;
	//---输出--
	printf("%.2lf", age);
}
*/

/*									                             //求2222
int main()
{
	//变量声明，输入a,累加存储变量，答案存储变量
	int n, a;
	int num ,result = 0;
	//--接受输入--
	scanf_s("%d %d", &n, &a);
	num = a;
	//--数据处理--

	//num用于存储a,aa,aaa这样的数字
	// num = aaa
	// num * 10 ==aaa0
	//num * 10 +a ==aaaa

	for (int i = 0; i < n; i++)
	{
		result += num;
		num = num * 10 + a;

	}
									   //斐波那契数列
*/
/*
int main()
{
	//变量声明，用户输入值
	// 月数
	int n;
	//用于存储当前月数，以及前1,2 个月的兔子书
	int m1 = 1, m2 = 1, m3 = 0;
	scanf_s("%d", &n);
	n -= 2;
	while (n--)//现参与判断后自减
	{
		m3 = m1 + m2;
		m1 = m2;
		m2 = m3;
	}
	//输出--
	printf("%d", m3);
}
*/
//                                弹球
/*
int main()
{
	//定义输入变量
	int M, N;
	//高度和距离
	double h, l = 0;
	//---接受数据
	scanf_s("%d %d", &M, &N);
	h = M;
	//处理数据--
	while (N--) {
		h /= 2;
		l += h * 3;
	}
	//输出--
	printf("%.2lf,%.2lf", h, l);
}*/





