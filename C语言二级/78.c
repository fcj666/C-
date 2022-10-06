/*#include<stdio.h>

#define N 4 
void fun(int a[][N])
{
	int b[N][N],i,j;
	for (i = 0; i < N; i++)
		for (j = 0; j < N; j++)
			b[i][j] = a[N - 1 - j][i];
	for (i = 0; i < N; i++)
		for (j = 0; j < N; i++)
			for (j = 0; j < N; j++)
				a[i][j] = b[i][j];

}
void main()
{
	int x[N][N] =
	{ {1,2,3,4},{5,6,7,8},{9,10,11,12},{13,14,15,16} },i;
	fun(x);
	for (i = 0; i < N; i++)
		printf("%d ", x[i][i]);
	printf("\n");
	system("pause");
	return 0;
}
*/
