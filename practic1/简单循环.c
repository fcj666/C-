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





