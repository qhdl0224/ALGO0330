#pragma warning(disable:4996)
#include <iostream>
using namespace std;
void check(int num,int **);
int main(void)
{
	int num;
	int **ary;
	freopen("ex9.txt", "r", stdin);
	cin >> num;
	ary = (int **)calloc(num, sizeof(int *));
	for (int i = 0; i < num; i++)
	{
		ary[i] = (int *)calloc(11, sizeof(int));
	}
	for (int i = 0; i < num; i++)
	{
		for (int j = 0; j < 10; j++)
		{
			cin >> ary[i][j];
		}
	}

	check(num, ary);


	//����
	for (int i = 0; i < num; i++)
	{
		free(ary[i]);
	}
	free(ary);

	return 0;
}

void check(int num, int **ary)
{
	int checkingValue = 0;
	int tempAry[10] = { 0, };
	int selectNum;
	int select = 0;
	for (int i = 0; i < num; i++)
	{
		select = 0;
		for (int j = 0; j < 10; j++)
		{
			checkingValue = 0;
			selectNum = ary[i][j];
			for (int k = 0; k < 10; k++)
			{
				if (selectNum == ary[i][k])
				{
					checkingValue++;
				}
			}
			if (checkingValue == 1)
			{
				tempAry[select] = selectNum;
				select++;
			}
		}
		cout << "�˻��� ���� : ";
		for (int m = 0; m < 10; m++)
		{
			cout << ary[i][m]<<' ';
		}
		cout << '\n';
		cout << "�ѹ��� ���� ���� : ";
		for (int k = 0; k < select; k++)
		{
			cout << tempAry[k] << ' ';
		}
		cout << '\n';
		for (int k = 0; k < select; k++)
		{
			tempAry[k] = 0;
		}
	}
}