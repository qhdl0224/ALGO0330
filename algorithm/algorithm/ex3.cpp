#pragma warning(disable:4996)
#include <iostream>
using namespace std;

void multiple(int matrixA[][4], int matrixB[][4], int C[][4]);
void printMatrix(int matrixA[][4], int matrixB[][4], int C[][4]);
int main(void)
{
	int matrixA[4][4] = { {0,1,2,3},{1,-2,1,2},{2,5,-3,2},{0,-3,1,4} };
	int matrixB[4][4] = { {1,-1,2,0},{1,-1,1,2},{-1,0,3,1},{2,-1,2,8} };
	int C[4][4];
	multiple(matrixA, matrixB, C);
	printMatrix(matrixA, matrixB, C);
	return 0;
}
void multiple(int matrixA[][4], int matrixB[][4], int C[][4])
{
	int sum = 0;
	for (int i = 0; i < 4; i++)
	{
		for (int j = 0; j < 4; j++)
		{
			for (int k = 0; k < 4; k++)
			{
				sum += matrixA[i][k] * matrixB[k][j];
			}
			C[i][j] = sum;
			sum = 0;
		}
	}
}
void printMatrix(int matrixA[][4], int matrixB[][4], int C[][4])
{
	cout << "[MatrixA]"<<'\n';
	for (int i = 0; i < 4; i++)
	{
		for (int j = 0; j < 4; j++)
		{
			cout << matrixA[i][j]<<' ';
		}
		cout << '\n';
	}
	cout <<'\n'<< "[MatrixB]" << '\n';
	for (int i = 0; i < 4; i++)
	{
		for (int j = 0; j < 4; j++)
		{
			cout << matrixB[i][j] << ' ';
		}
		cout << '\n';
	}
	cout <<'\n'<< "[C = A * B]" << '\n';
	for (int i = 0; i < 4; i++)
	{
		for (int j = 0; j < 4; j++)
		{
			cout << C[i][j] << ' ';
		}
		cout << '\n';
	}
}