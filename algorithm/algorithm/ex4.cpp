#pragma warning(disable:4996)
#include <iostream>
using namespace std;

int input(int ary[]);
int max(int ary[],int size);
int min(int ary[],int size);
void printResult(int ary[], int size);
int main(void)
{
	int result = 0;
	int ary[100];
	while (1)
	{
		result = input(ary);
		if (result == -1)
			break;
		printResult(ary, result);

	}
	return 0;
}
int input(int ary[])
{
	int size;
	bool flag = false;
	int i = 0;
	cout << "* 정수입력 : ";
	
	while (1)
	{
		cin >> ary[i];
		if (cin.fail())
		{
			flag = true;
			break;
		}
		if (ary[i] == 0)
		{
			break;
		}
		i++;
	}
	if (flag == true)
	{
		size = -1;
	}
	else
	{
		size = i;
	}
	return size;
}

int max(int ary[],int size)
{
	int max = -0x7fffffff;
	int maxIndex = 0;
	for (int i = 0; i < size; i++)
	{
		if (ary[i] > max)
		{
			max = ary[i];
			maxIndex = i;
		}
	}
	return maxIndex;
}
int min(int ary[],int size)
{
	int min = 0x7fffffff;
	int minIndex = 0;
	for (int i = 0; i < size; i++)
	{
		if (ary[i] < min)
		{
			min = ary[i];
			minIndex = i;
		}
	}
	return minIndex;
}
void printResult(int ary[], int size)
{

	int maxIndex = 0;
	int minIndex = 0;

	maxIndex = max(ary, size);
	minIndex = min(ary, size);

	cout << "최대값 : " << ary[maxIndex] << "(index:" << maxIndex << ") ";
	cout << "/ 최소값 : " << ary[minIndex] << "(index:" << minIndex << ")" << '\n';
}