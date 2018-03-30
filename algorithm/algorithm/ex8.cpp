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

	//동적할당
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
	//점수 계산
	
	//해제
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
		cout << "문제 수 : " << problemNum[i] << "문항" << '\n';
		cout << "채점 결과 :";
		for (int k = 0; k < problemNum[i]; k++)
		{
			cout << problem[i][k] << ' ';
		}
		cout << '\n';
		cout << "점수 : " << problemScore<<'\n';
	}
}