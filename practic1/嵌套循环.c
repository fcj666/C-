#include<stdio.h>
//��ѧ��ƽ������
/*
int main()
{
	//�������   ��ʱ��¼������ѧ���������ܺ�
	int n,temp = 0;
	double age = 0;
	//--��������--
	//ע������age+=temp,Ҳ�ʹ洢������ѧ������ĺ�
	scanf_s("%d", &n);
	for (int i = 0; i < n; i++)
	{
		scanf_s("%d", &temp);
		age += temp;
	}
	//���ݴ���--
	age /= n;
	//---���--
	printf("%.2lf", age);
}
*/

/*									                             //��2222
int main()
{
	//��������������a,�ۼӴ洢�������𰸴洢����
	int n, a;
	int num ,result = 0;
	//--��������--
	scanf_s("%d %d", &n, &a);
	num = a;
	//--���ݴ���--

	//num���ڴ洢a,aa,aaa����������
	// num = aaa
	// num * 10 ==aaa0
	//num * 10 +a ==aaaa

	for (int i = 0; i < n; i++)
	{
		result += num;
		num = num * 10 + a;

	}
									   //쳲���������
*/
/*
int main()
{
	//�����������û�����ֵ
	// ����
	int n;
	//���ڴ洢��ǰ�������Լ�ǰ1,2 ���µ�������
	int m1 = 1, m2 = 1, m3 = 0;
	scanf_s("%d", &n);
	n -= 2;
	while (n--)//�ֲ����жϺ��Լ�
	{
		m3 = m1 + m2;
		m1 = m2;
		m2 = m3;
	}
	//���--
	printf("%d", m3);
}
*/
//                                ����
/*
int main()
{
	//�����������
	int M, N;
	//�߶Ⱥ;���
	double h, l = 0;
	//---��������
	scanf_s("%d %d", &M, &N);
	h = M;
	//��������--
	while (N--) {
		h /= 2;
		l += h * 3;
	}
	//���--
	printf("%.2lf,%.2lf", h, l);
}*/





#include<stdio.h>
#include<math.h>
//c�˷���
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
//������
//����һ�����ж���������

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
{    //��������--
	//����ֵ
	int N;
	//��ʶ��  ֵΪһ��ʾ ������ֵΪ�� ��ʾ������
	int flag;
	//��������--
	scanf_s("%d", &N);
	//--  ��������--
	//--���--
	int i;
	for (i = 2; i <= N; i++) {  //���ѭ��   �ж����ִ�С
		flag = 0;
		for (int j = 2; j < i; j++) {  //�ڲ�ѭ���ж��Ƿ�������
			//���i%jΪ��  ���ʾ�����Ƿ�����  0��ʾ�٣���ȡ��Ϊ��
			if (!(i % j)) {
				flag = 1;
				break;
			}
		}
		//���flag��0����ʾ������ ��ӡ
		if (!flag)
			printf("%d\n", i);
	}
}*/

/*                                                 // С��Ϸ  ������
int main()
{
	//��������--
	//����ֵ
	int n;
	//����²�Ĵ��������ַ��²�������
	int count = 0, max = 100, min = 0;
	//�²�
	int mid;
	//---��������--
	scanf_s("%d", &n);
	do {
		//--���ݴ���--
		/*
		* �²�ֵ =  ������+���ޣ�/2
		* ����²�ֵ��nС��  ����  =  mid +1
		* ����²�ֵ��n����  ����  = mid -1
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

			printf("���ղ²���%d��", count);
		}
		*/
		//                                 ��ӡ ����
		/*int main()
		{
			//��������
			//���α߳�
			int n;
			//--��������--
			scanf_s("%d", &n);
			//--���ݴ���--
			/*
			* ������ϵ��˼·
			* �����꣨x,y)
			*��x�ľ���ֵ +  y�ľ���ֵ С�� ʱ������������������
			* ��x�ľ���ֵ + y �ľ���ֵ  ���ڵ���nʱ������������������
			* �磨2,2���������ڣ���3,2���������⣨-4,0����������
			*/
			//���--
			//��n = 5�����������޷ֱ���  -4--4  ����ȡ��߶���9
		/*	for (int i = -n + 1; i < n; i++) {
				for (int j = -n + 1; j < n; j++) {
					//��i�ľ���ֵ+j�ľ���ֵС��nʱ�����η�Χ��
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

