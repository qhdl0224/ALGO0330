#pragma warning(disable:4996)
#include <iostream>
using namespace std;

int print(int num,int arr[][15]);
int main()
{
	FILE *stream;
	int num;
	int result;
	int arr[3][15];
	stream = freopen("C:\\data\\ex1.txt", "r", stdin);
	cin >> num;

	for (int i = 0; i < num; i++)
	{
		for (int j = 0; j < 15; j++)
		{
			cin >> arr[i][j];
			if (arr[i][j] == 0)
			{
				break;
			}
		}
	}

	for (int i = 0; i < num; i++)
	{
		result = print(i, arr);
		cout << "# ���� : ";
		for (int j = 0; j < 15; j++)
		{
			if (arr[i][j] == 0)
			{
				break;
			}
			cout << arr[i][j] << ' ';
		}
		cout << "\n";
		cout << "2�� ���� �����ϴ� ������ ������ "<<result<<"�� �Դϴ�" << '\n';
	}
	fclose(stream);
}
int print(int num,int arr[][15])
{
	int cnt = 0;
	int select = 0;

	while (arr[num][select] != 0)
	{
		for (int i = 0; i < 15; i++)
		{
			if (arr[num][i] == arr[num][select] * 2)
			{
				cnt++;
			}
		}
		select++;
	}

	return cnt;
	
	
}