#pragma warning(disable:4996)
#include <iostream>
using namespace std;

void print(char ch, char arr[]);
int main(void)
{
	char arr[100];
	char ch;
	while (1)
	{
		cout << "# 문자열을 입력하시오 : ";
		cin >> arr;
		if (strcmp(arr, "end") == 0)
		{
			break;
		}
		cout << "# 문자를 입력하시오 : ";
		cin >> ch;

		print(ch, arr);
	}





	return 0;
}
void print(char ch, char arr[])
{
	bool flag = false;
	int i = 0;
	cout << "" << arr << "문자열 안에 " << ch << "문자는 ";
	while (arr[i] != '\0')
	{
		if (arr[i] == ch)
		{
			cout << i << "번 위치 ";
			flag = true;
		}
		i++;
	}
	if (flag == true)
	{
		cout << "에 존재합니다." << '\n';
	}
	else
	{
		cout << "존재하지 않습니다." << '\n';
	}
}