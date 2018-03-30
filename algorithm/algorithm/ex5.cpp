#pragma warning(disable:4996)
#include <iostream>
using namespace std;

char* intergerToString(char a[],int value);
void reverse(int value,char *);
int main(void)
{
	char ary[15] = { 0, };
	char *tmp;
	int value;
	while (1)
	{
		cout << "#금액 입력 : ";
		cin >> value;
		if (value < 0)
		{
			break;
		}
		tmp = intergerToString(ary, value);
		reverse(value, ary);
		for (int i = 0; i < 15; i++)
		{
			ary[i] = 0;
		}

	}
	return 0;
}
char* intergerToString(char tempAry[],int value)
{
	int j = 0;
	int index = 0;
	char ary[11];
	itoa(value, ary, 10);
	int length = strlen(ary);
	for (int i = length-1; i >=0; i--)
	{
		if (j!=0 && index % 3 == 0)
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
void reverse(int value,char *ary)
{
	cout <<value<<"->";
	int length = strlen(ary);
	for (int i = length; i >= 0; i--)
	{
		cout << ary[i];
	}
	cout << '\n';
}