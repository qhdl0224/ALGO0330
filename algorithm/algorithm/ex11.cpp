#pragma warning(disable:4996)
#include <iostream>
using namespace std;

int main(void)
{
	FILE *stream;
	int cnt = 1;
	int tempAry[101] = { 0, };
	int num;
	int *student;
	int studentNum;
	stream = freopen("ex11.txt", "r", stdin);
	cin >> num;
	student = (int *)calloc(101, sizeof(int));

	for (int i = 0; i < num; i++)
	{
		cin >> studentNum;
		for (int j = 0; j < studentNum; j++)
		{
			cin >> student[j];
		}
		int l;
		for (int j = 0; j < studentNum; j++)
		{
			l = 0;
			for (int k = student[j] ;k > 0;k--) //현재 번호에서 뽑은 수만큼만 이동시킴
			{
				tempAry[cnt-1 -l] = tempAry[cnt-2 -l];
				l++;
			}
			tempAry[j-student[j]] = cnt; //마지막자리 - 뽑은번호에 몇번째 사람이 뽑은지 넣음
			cnt++;
		}

		cout << i+1 << "반 학생의 순서 출력 :";
		for (int j = 0; j < studentNum; j++)
		{
			cout << tempAry[j] << ' ';
		}
		cout << '\n';

		cnt = 1;
		//초기화
		for (int j = 0; j < studentNum; j++)
		{
			tempAry[j] = 0;
		}
	}

	
	free(student);
	fclose(stream);
	return 0;
}