#include<stdio.h>
//                                ���߱ȴ�С
/*int main()
{
	//�������;
	int a, b, c, max;
	//������������
	scanf_s("%d %d %d", &a, &b, &c);
	max = a;
	if (b > max)
		max = b;
	if (c > max)
		max = c;
	printf("%d", max);

}
*/
//                            �����
/*
int main()
{
	//����
	int n;
	//���
	int result;
	//��������
	scanf_s("%d", &n);
	//--���ݴ���--
	if (n <= 10)
		result = n * 6;
	else if (n < 20)
		result = 10 * 6 + (n - 10) * 2;
	else result = 10 * 6 + 10 * 2 + (n - 20) * 1;
	printf("%d", result);
}
*/
//                         �ϰ���·�����ﳵ
/*
int main()
{
	//��������
	//����
	int n;
	//������ʾ�ﳵ�죬������ʾ��·�죬0��ʾһ����
	//--��������--
	double R;
	scanf_s("%d", &n);
	//--���ݴ���--
	R = (27 + 23 + n / 3.0) - (n / 1.2);
	//���--
	//ע��double �жϻ��о�������  ������ֱ���ж� ==0
	if (R < 0.0001) printf("�ﳵ");
	else if (R > 0.0001) printf("��·");
	else printf("һ����");
}
*/
