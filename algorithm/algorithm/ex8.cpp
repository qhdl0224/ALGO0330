#pragma warning(disable:4996)
#include <iostream>
using namespace std;

void score(int **,int num ,int *problemNum);
int main(void)
{
	int num;
	int *problemNum;
	int **problem;
	freopen("ex8.txt", "r", stdin);
	cin >> num;

	//�����Ҵ�
	problem = (int **)calloc(3,sizeof(int*));
	for (int i = 0; i < num; i++)
	{
		problem[i] = (int *)calloc(101,sizeof(int));
	}
	problemNum = (int *)calloc(3, sizeof(int));
	for (int i = 0; i < num; i++)
	{
		cin >> problemNum[i];
		for (int j = 0; j < problemNum[i]; j++)
		{
			cin >> problem[i][j];
		}
	}

	score(problem, num, problemNum);
	//���� ���
	
	//����
	free(problemNum);
	for (int i = 0; i < num; i++)
	{
		free(problem[i]);
	}
	free(problem);
	return 0;
}
void score(int **problem,int num,int *problemNum)
{
	int problemScore = 0;
	int check = 0;
	for (int i = 0; i < num; i++)
	{
		problemScore = 0;
		check = 0;
		for (int j = 0; j < problemNum[i]; j++)
		{
			if (problem[i][j] == 0)
			{
				check = 0;
			}
			else
			{
				if (problem[i][j - 1] == 1)
				{
					check += 1;
				}
				else
				{
					check = 1;
				}
			}
			problemScore += check;
		}
		cout << "���� �� : " << problemNum[i] << "����" << '\n';
		cout << "ä�� ��� :";
		for (int k = 0; k < problemNum[i]; k++)
		{
			cout << problem[i][k] << ' ';
		}
		cout << '\n';
		cout << "���� : " << problemScore<<'\n';
	}
}