//include<stdio.h>
//ȥ��
/*t main()
{
	//--��������--
	//����������ȥ�غ������
	int N, len;
	//��ȥ�ص�����
		int  arr[100];
	//��������--
	scanf_s("%d", &N);
	len = N;
	for (int i = 0; i < N; i++) {
		scanf_s("%d", &arr[i]);
	}
	//���ݴ���--
	/*��ÿ��Ԫ�غͺ����Ԫ�ؽ����ж�
���[i][j]ֵ�ظ���[j] ��ֵ��Ϊ-1������len--
{1,3,2,6,-1��-1,4,8,-1��-1}
���ж�һ��󣬽�ֵΪ-1 ��Ԫ��  �ú�һ��Ԫ�ؽ��и���

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
//���
for (int i = 0; i < len; i++) {
	printf("%d ", arr[i]);
}

}
*/
//���ֻ�
/*int main()
{
	//--��������
	//���ֻ��洢���飬���ȣ��ƶ�λ��
	int arr[100], len, m;
	//ת��������
	int result[100];
	//--��������--
	scanf_s("%d", &len);
	for (int i = 0; i < len; i++)
	{
		scanf_s("%d", &arr[i]);
	}
	//�����ƶ�Ϊ��--
	scanf_s("%d", &m);
	//--���ݴ���-
	for (int i = 0; i < len; i++) {
		result[(i + m) % len] = arr[i];//�ص�
	}
	//���--
	for (int i = 0; i < len; i++)
	{
		printf("%d ", result[i]);

	}
}
*/
                                             //�Ŷ�ǹ�� ---Լɪ��  ����  
/*
int main()
{
	//--��������
	// ������� ����ǹ����������ҵ�ǰ״��
	int  n, m, arr[100];
	// Ŀǰ���ŵ�������flag ���ڵ�ǰ�赼��
	int num, flag = 0;
	//--��������--
	scanf_s("%d %d", &n, &m);
	num = n;
	for (int i = 0; num - 1; i++) {       //���鵱����n����Ҫ���·���
		if (i == n)i = 0;

		if (arr[i]) {    //ֻҪ����  �ͺ��ں� ����m�ľ�ֱ��ǹ�� ���±���
			flag++;
			if (flag == m) {
				arr[i] = 0;
				flag = 0;
				num--;  //    ���ŵ�����--

			}
		}

	}
	//���--
	for (int i = 0; i < n; i++) {

		if (arr[i]) printf("%d", i + 1); // ��������ŵ�
	}
}*/
