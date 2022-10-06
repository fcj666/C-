/*#include<stdio.h>
#include<stdlib.h>
void fun(int a[],int n)
{
	int i,j=0,k=n-1,b[10];
	for(i=0;i<n/2;i++)
	{
		b[i] = a[j];
		b[k] = a[j+1];
		j+=2;k--;
	}
	for(i=0;i<n;i++)
		a[i] = b[i];
}
void main()
{
	int c[10] = {10,9,8,7,6,5,4,3,2,1},i;
	fun(c,10);
	for(i=0;i<10;i++)
		printf("%d ",c[i]);
	printf("\n");
	system("pause");

}
*/