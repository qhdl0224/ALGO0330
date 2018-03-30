#pragma warning(disable:4996)
#include <iostream>
using namespace std;
int max(int ary[], int size);
int min(int ary[], int size);
int main(void)
{
	int a, b, c;
	int maximum;
	int minimum;
	int num;
	int parkMoney[3];
	int parkTime[3][2];
	int startTime[3];
	int endTime[3];
	int totalMoney = 0;
	freopen("ex10.txt", "r", stdin);
	cin >> num;
	for (int i = 0; i < num; i++)
	{
		totalMoney = 0;
		for (int j = 0; j < 3; j++)
		{
			cin >> parkMoney[j];
		}
		for (int k = 0; k < 3; k++)
		{
			for (int l = 0; l < 2; l++)
			{
				cin >> parkTime[k][l];
			}
		}

		startTime[0] = parkTime[0][0];
		startTime[1] = parkTime[1][0];
		startTime[2] = parkTime[2][0];
		endTime[0] = parkTime[0][1];
		endTime[1] = parkTime[1][1];
		endTime[2] = parkTime[2][1];

		minimum = min(startTime, 3);
		maximum = max(endTime, 3);

		for (int m = minimum; m <= maximum; m++) //최소 시간부터 최대 시간
		{
			a = b = c = 0;
			for (int A = startTime[0]; A < endTime[0]; A++)
			{
				if (m == A)
				{
					a++;
				}
			}
			for (int B = startTime[1]; B < endTime[1]; B++)
			{
				if (m == B)
				{
					b++;
				}
			}
			for (int C = startTime[2]; C < endTime[2]; C++)
			{
				if (m == C)
				{
					c++;
				}
			}
			if (a + b + c == 3) //셋이 같이 있을 경우
			{
				totalMoney += (parkMoney[2] * 3);
			}
			else if (a + b + c == 2)
			{
				totalMoney += (parkMoney[1] * 2);
			}
			else if(a+b+c == 1)
			{
				totalMoney += (parkMoney[0] * 1);
			}

		}
		cout << "A요금 : " << parkMoney[0] << "/ B요금 : " << parkMoney[1] << "/ C요금 :" << parkMoney[2] << '\n';
		cout << "총 주차 요금 : " << totalMoney<<'\n';

	}
	return 0;
}
int max(int ary[], int size)
{
	int max = -0x7fffffff;
	for (int i = 0; i < size; i++)
	{
		if (ary[i] > max)
		{
			max = ary[i];
		}
	}
	return max;
}

int min(int ary[], int size)
{
	int min = 0x7fffffff;
	for (int i = 0; i < size; i++)
	{
		if (ary[i] < min)
		{
			min = ary[i];
		}
	}
	return min;
}