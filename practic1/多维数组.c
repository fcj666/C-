#include<stdio.h>
/*int main()
{
	//��������������ʼ������
	int arrar[3][3] = {{1,2,3},{4,5,6},{7,8,9}};
	int i,j;
	int result[3][3];
	for(i = 0; i < 3; i++){
		for (j = 0; j < 3; j++){

			result[j][i] = arrar[i][j];
		}

	}
	//���
	for (i = 0; i < 3; i++) {
		for (j = 0; j < 3; j++) {
			printf("%d ", result[i][j]);
		}
		printf("\n");
	}
}
*/
//        ��׵��
/*int main()
{
	int size, arr[10][10], result[10][10];
	//--��������--
	scanf_s("%d", &size);
	for (int i = 0; i < size; i++)
	{
		for (int j = 0; j < size; j++) {
			scanf_s("%d", &arr[i][j]);
		}
	}
	//--���ݴ���--
	for (int i = 0; i < size; i++) {
		for (int j = 0; j < size; j++) {
			result[j][size - 1 - i] = arr[i][j];
		}
	}
	/*
	* ����1size  Ϊ3
	* [0][0]->[0][2]
	* [0][1]->[1][2]
	* [1][2] -> [2][1]
	* [2][1]->[1][0]
	* ���� xתy yתx
	* xתy ʱ size - x = y
	* yתxʱ y = x;
	* */

	//���
/*	for (int i = 0; i < size; i++) {
		for (int j = 0; j < size; j++) {
			printf("%d ", result[i][j]);
		}
		printf("\n");
	}
}
*/
//�������
/*int main()
{
	//--��������
	//������Ǹ߶�
	int n;
	//�洢�����飬ע���������ֻռ��һ��Ŀռ�
	//����������malloc��̬����������ռ��˷�
	//--��������--
	int arr[10][10];
	scanf_s("%d", &n);
	arr[0][0] = 1;
	//--���ݴ���--
	//������������ֱ����伴��
	for (int i = 1; i < n; i++) {
		arr[i][0] = arr[i][i] = 1;
		for (int j = 1; j < i; j++) {
			arr[i][j] = arr[i - 1][j - 1] + arr[i - 1][j];
		}
	}
	//--���--
	for (int i = 0; i < n; i++) {
		for (int j = 0; j <= i; j++) {
			printf("%d ", arr[i][j]);
		}
		printf("\n");
	}
}*/
