#pragma warning(disable:4996)
#include <iostream>
using namespace std;
int distinguish(int ary[]);
int main(void)
{
	int result;
	bool flag = false;
	int i = 0;
	int ary[6];
	while (1)
	{
		i = 0;
		cout << "# 0~9사이의 숫자 6개를 입력하시오 : ";
		while (i!=6)
		{
			cin >> ary[i];
			if (cin.fail())
			{
				flag = true;
				break;
			}
			i++;
		}
		if (flag == true)
		{
			break;
		}
		else
		{
			result = distinguish(ary);
			if (result == 0)
			{
				for (int i = 0; i < 6; i++)
				{
					cout << ary[i] << ' ';
				}
				cout << "는 Maybe Win이 아닙니다."<<'\n';
			}
			else
			{
				for (int i = 0; i < 6; i++)
				{
					cout << ary[i] << ' ';
				}
				cout << "는 Maybe Win입니다."<<'\n';
			}
		}
	}
	
	


	return 0;
}
int distinguish(int ary[])
{
	int result = 0;
	int cnt = 0;
	int selectValue;
	//triples
	for (int i = 0; i < 6; i++)
	{
		cnt = 0;
		selectValue = ary[i];
		for (int j = 0; j < 6; j++)
		{
			if (selectValue == ary[j])
			{
				cnt++;
			}
		}
		if (cnt == 3)
		{
			result++;
		}

	}
	//runs
	cnt = 0;
	for (int i = 0; i < 6; i++)
	{
		cnt = 0;
		selectValue = ary[i];
		for (int j = 0; j < 6; j++)
		{
			if (ary[j] == selectValue + 1)
			{
				selectValue = ary[j];
				cnt++;
			}
		}
		if (cnt >= 2)
		{
			result++;
		}
	}

	return result;
}