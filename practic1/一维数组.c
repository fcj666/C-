//include<stdio.h>
//去重
/*t main()
{
	//--变量声明--
	//数据总数，去重后的数量
	int N, len;
	//带去重的数据
		int  arr[100];
	//接受输入--
	scanf_s("%d", &N);
	len = N;
	for (int i = 0; i < N; i++) {
		scanf_s("%d", &arr[i]);
	}
	//数据处理--
	/*将每个元素和后面的元素进行判断
如果[i][j]值重复将[j] 的值设为-1，并且len--
{1,3,2,6,-1，-1,4,8,-1，-1}
都判断一遍后，将值为-1 的元素  用后一个元素进行覆盖

{1,3,2,6,4,8}
*/
/*or (int i = 0; i < N; i++) {
	for (int j = i + 1; j < N; j++) {
		if (arr[i] == -1) break;
		if (arr[i] == arr[j]) {
			arr[j] = -1;
			len--;
		}
	}
}
for (int i = 0, j = 0; j < N; j++)
{
	arr[i] = arr[j];
	if (arr[i] != -1) {
		i++;
	}
}
//输出
for (int i = 0; i < len; i++) {
	printf("%d ", arr[i]);
}

}
*/
//数字环
/*int main()
{
	//--变量声明
	//数字环存储数组，长度，移动位数
	int arr[100], len, m;
	//转换后数组
	int result[100];
	//--接受输入--
	scanf_s("%d", &len);
	for (int i = 0; i < len; i++)
	{
		scanf_s("%d", &arr[i]);
	}
	//输入移动为数--
	scanf_s("%d", &m);
	//--数据处理-
	for (int i = 0; i < len; i++) {
		result[(i + m) % len] = arr[i];//重点
	}
	//输出--
	for (int i = 0; i < len; i++)
	{
		printf("%d ", result[i]);

	}
}
*/
                                             //排队枪毙 ---约瑟夫环  不会  
/*
int main()
{
	//--变量声明
	// 玩家数量 ，被枪毙人数，玩家当前状况
	int  n, m, arr[100];
	// 目前活着的人数，flag 用于当前疏导及
	int num, flag = 0;
	//--接受输入--
	scanf_s("%d %d", &n, &m);
	num = n;
	for (int i = 0; num - 1; i++) {       //数组当超过n是需要重新返回
		if (i == n)i = 0;

		if (arr[i]) {    //只要不是  就喊口号 喊道m的就直接枪毙 重新报号
			flag++;
			if (flag == m) {
				arr[i] = 0;
				flag = 0;
				num--;  //    活着的人数--

			}
		}

	}
	//输出--
	for (int i = 0; i < n; i++) {

		if (arr[i]) printf("%d", i + 1); // 输出最后活着的
	}
}*/
