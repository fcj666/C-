#include<stdio.h>
#include<string.h>
#include<stdlib.h>
/*int  main()
{
	int i;
	char a[] = "How are you!";
	for(i=0;a[i];i++)
		if(a[i]== ' ')
			strcpy(a,&a[i+1]);
	printf("%s\n",a);
	system("pause");
	return 0;
}
*/
/*
char * a = "you";
char * b = "Welcome you to Beijing!";
int main()
{
	char * p;
	p = strstr(b,a);
	printf("%s\n",p);
	system("pasue");
	return 0;
}
*/
/*int main()
{
	char b[3][10];
	int i;
	for(i=0;i<2;i++)
		scanf("%s",b[i]);
	gets(b[2]);
	printf("%s%s%s\n",b[0],b[1],b[2]);
}*/

/*int main()
{
	char w[20],a[5][10] = {"abcdef","ghijkl","mnopq","rstuv","wxyz"};
	int i;
	for(i=0;i<5;i++)
		w[i] = a[i][strlen(a[i])/2];
	w[5] = '\0';
	puts(w);
	system("pause");
	return 0;
}*/

#include<stdio.h>

void f(int x[],int n)
{
	if(n>1)
	{
		printf("%d",x[n-1]);
		f(x,n-1);
	}
	else
		printf("%d",x[0]);
}
int main()
{
	int z[6] = {1,2,3,4,5,6};
	f(z,6);
	printf("\n");
	system("pause");
	return 0;
}
