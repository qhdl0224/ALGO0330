#pragma warning(disable:4996)
#include <iostream>
using namespace std;

int main(void)
{
	FILE *stream;
	int cnt = 1;
	int tempAry[101] = { 0, };
	int num;
	int *student;
	int studentNum;
	stream = freopen("ex11.txt", "r", stdin);
	cin >> num;
	student = (int *)calloc(101, sizeof(int));

	for (int i = 0; i < num; i++)
	{
		cin >> studentNum;
		for (int j = 0; j < studentNum; j++)
		{
			cin >> student[j];
		}
		int l;
		for (int j = 0; j < studentNum; j++)
		{
			l = 0;
			for (int k = student[j] ;k > 0;k--) //���� ��ȣ���� ���� ����ŭ�� �̵���Ŵ
			{
				tempAry[cnt-1 -l] = tempAry[cnt-2 -l];
				l++;
			}
			tempAry[j-student[j]] = cnt; //�������ڸ� - ������ȣ�� ���° ����� ������ ����
			cnt++;
		}

		cout << i+1 << "�� �л��� ���� ��� :";
		for (int j = 0; j < studentNum; j++)
		{
			cout << tempAry[j] << ' ';
		}
		cout << '\n';

		cnt = 1;
		//�ʱ�ȭ
		for (int j = 0; j < studentNum; j++)
		{
			tempAry[j] = 0;
		}
	}

	
	free(student);
	fclose(stream);
	return 0;
}