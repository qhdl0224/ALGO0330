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
		cout << "# ���ڿ��� �Է��Ͻÿ� : ";
		cin >> arr;
		if (strcmp(arr, "end") == 0)
		{
			break;
		}
		cout << "# ���ڸ� �Է��Ͻÿ� : ";
		cin >> ch;

		print(ch, arr);
	}





	return 0;
}
void print(char ch, char arr[])
{
	bool flag = false;
	int i = 0;
	cout << "" << arr << "���ڿ� �ȿ� " << ch << "���ڴ� ";
	while (arr[i] != '\0')
	{
		if (arr[i] == ch)
		{
			cout << i << "�� ��ġ ";
			flag = true;
		}
		i++;
	}
	if (flag == true)
	{
		cout << "�� �����մϴ�." << '\n';
	}
	else
	{
		cout << "�������� �ʽ��ϴ�." << '\n';
	}
}