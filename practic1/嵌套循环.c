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





#include<stdio.h>
#include<math.h>
//c乘法表
/*
int main()
{
	int i, j;
	for (i = 1; i <= 9; i++) {
		for (j = 1; j <= i; j++) {
			printf("%d * %d =%d\t", j, i, j * i);
		}
		printf("\n");
	}
}
*/
//求素数
//输入一个数判断是素数吗？

/*int main()
{
	int n, i;
	printf("please enter a integer number n=");
	scanf_s("%d", &n);
	for (i = 2; i < n; i++)
		if (n % i == 0) break;
	if (i < n)printf("%d  this not is a prime", n);
	else printf("%d is a prime number.\n", n);
	return 0;
}*/
/*
int main()
{    //变量声明--
	//输入值
	int N;
	//标识符  值为一表示 素数，值为零 表示非素数
	int flag;
	//接受输入--
	scanf_s("%d", &N);
	//--  接受输入--
	//--输出--
	int i;
	for (i = 2; i <= N; i++) {  //外层循环   判断数字大小
		flag = 0;
		for (int j = 2; j < i; j++) {  //内层循环判断是否是素数
			//如果i%j为零  则表示数字是非素数  0表示假，！取反为真
			if (!(i % j)) {
				flag = 1;
				break;
			}
		}
		//如果flag是0，表示是素数 打印
		if (!flag)
			printf("%d\n", i);
	}
}*/

/*                                                 // 小游戏  猜数字
int main()
{
	//变量声明--
	//输入值
	int n;
	//程序猜测的次数，二分法猜测上下限
	int count = 0, max = 100, min = 0;
	//猜测
	int mid;
	//---接受输入--
	scanf_s("%d", &n);
	do {
		//--数据处理--
		/*
		* 猜测值 =  （上限+下限）/2
		* 如果猜测值比n小择  下限  =  mid +1
		* 如果猜测值比n大择  上限  = mid -1
		*
		*/
		/*		count++;
				mid = (max + min) / 2;
				if (mid > n) {
					max = mid - 1;
				}
				else if (mid < n) {
					min = mid + 1;
				}
				printf("%d\n", mid);
			} while (mid != n);

			printf("最终猜测了%d次", count);
		}
		*/
		//                                 打印 菱形
		/*int main()
		{
			//定义声明
			//菱形边长
			int n;
			//--接受输入--
			scanf_s("%d", &n);
			//--数据处理--
			/*
			* 用坐标系的思路
			* 社坐标（x,y)
			*当x的绝对值 +  y的绝对值 小于 时，这个坐标点在菱形内
			* 当x的绝对值 + y 的绝对值  大于等于n时，这个坐标点在菱形外
			* 如（2,2）在菱形内，（3,2）在菱形外（-4,0）在菱形内
			*/
			//输出--
			//当n = 5是坐标上下限分别是  -4--4  最大宽度、高度是9
		/*	for (int i = -n + 1; i < n; i++) {
				for (int j = -n + 1; j < n; j++) {
					//当i的绝对值+j的绝对值小于n时在菱形范围内
					if (abs(i) + abs(j) < n) {
						printf("*");
					 }
					else {
						printf(" ");
					}
				}
				printf("\n");
			}
		}
		*/

