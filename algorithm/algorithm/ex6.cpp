#pragma warning(disable:4996)
#include <iostream>
using namespace std;
bool input(char ary[]);
int stringToInteger(char ary[]);
char* intergerToString(char tempAry[], int value);
void reverse(int value, char *);
int main(void)
{
	int sum = 0;
	char ary[20] = { 0, };
	char tempAry[20] = { 0, };
	bool flag;
	while (1)
	{
		cout << "금액 입력 : ";
		cin >> ary;
		if (strcmp(ary, "0000") == 0)
			break;
		flag = input(ary);
		if (flag == true)
		{
			cout << "재 입력 하세요!"<<'\n';
		}
		else
		{
			sum += stringToInteger(ary);
		}
	}
	intergerToString(tempAry, sum);
	reverse(sum, tempAry);

	return 0;
}
bool input(char ary[])
{
	bool flag = false;
	int length = strlen(ary);
	for (int i = 0; i < length; i++)
	{
		if (ary[i] != ',' && !(ary[i] >= '0'&&ary[i] <= '9'))
		{
			flag = true;
			break;
		}
	}
	return flag;
}
int stringToInteger(char ary[])
{
	char tempAry[20] = { 0, };
	int resultValue;
	int length = strlen(ary);
	int j = 0;
	for (int i = 0; i < length; i++)
	{
		if (ary[i] != ',')
		{
			tempAry[j] = ary[i];
			j++;
		}
	}
	resultValue = atoi(tempAry);
	return resultValue;

}

char* intergerToString(char tempAry[], int value)
{
	int j = 0;
	int index = 0;
	char ary[20];
	itoa(value, ary, 10);
	int length = strlen(ary);
	for (int i = length - 1; i >= 0; i--)
	{
		if (j != 0 && index % 3 == 0)
		{
			tempAry[j] = ',';
			j++;
			tempAry[j] = ary[i];
			j++;
			index++;
		}
		else
		{
			tempAry[j] = ary[i];
			j++;
			index++;
		}

	}
	return tempAry;
}
void reverse(int value, char *ary)
{
	cout << "총합 : ";
	int length = strlen(ary);
	for (int i = length; i >= 0; i--)
	{
		cout << ary[i];
	}
	cout << '\n';
}