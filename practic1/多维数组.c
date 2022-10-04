#include<stdio.h>
/*int main()
{
	//定义变量。定义初始化数组
	int arrar[3][3] = {{1,2,3},{4,5,6},{7,8,9}};
	int i,j;
	int result[3][3];
	for(i = 0; i < 3; i++){
		for (j = 0; j < 3; j++){

			result[j][i] = arrar[i][j];
		}

	}
	//输出
	for (i = 0; i < 3; i++) {
		for (j = 0; j < 3; j++) {
			printf("%d ", result[i][j]);
		}
		printf("\n");
	}
}
*/
//        颈椎病
/*int main()
{
	int size, arr[10][10], result[10][10];
	//--接受输入--
	scanf_s("%d", &size);
	for (int i = 0; i < size; i++)
	{
		for (int j = 0; j < size; j++) {
			scanf_s("%d", &arr[i][j]);
		}
	}
	//--数据处理--
	for (int i = 0; i < size; i++) {
		for (int j = 0; j < size; j++) {
			result[j][size - 1 - i] = arr[i][j];
		}
	}
	/*
	* 架设1size  为3
	* [0][0]->[0][2]
	* [0][1]->[1][2]
	* [1][2] -> [2][1]
	* [2][1]->[1][0]
	* 规律 x转y y转x
	* x转y 时 size - x = y
	* y转x时 y = x;
	* */

	//输出
/*	for (int i = 0; i < size; i++) {
		for (int j = 0; j < size; j++) {
			printf("%d ", result[i][j]);
		}
		printf("\n");
	}
}
*/
//杨辉三角
/*int main()
{
	//--变量声明
	//杨辉三角高度
	int n;
	//存储用数组，注意杨辉三角只占用一半的空间
	//所有这里用malloc动态分配来避免空间浪费
	//--接受输入--
	int arr[10][10];
	scanf_s("%d", &n);
	arr[0][0] = 1;
	//--数据处理--
	//左右两侧数据直接填充即可
	for (int i = 1; i < n; i++) {
		arr[i][0] = arr[i][i] = 1;
		for (int j = 1; j < i; j++) {
			arr[i][j] = arr[i - 1][j - 1] + arr[i - 1][j];
		}
	}
	//--输出--
	for (int i = 0; i < n; i++) {
		for (int j = 0; j <= i; j++) {
			printf("%d ", arr[i][j]);
		}
		printf("\n");
	}
}*/
