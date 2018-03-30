#include <iostream>
using namespace std;

int L, C;

//char strData[16];
int strData[26][2];
char arr[16][16];
int test[16];
void func(int tt[16], int cnt, int ja, int mo, int index)
{
	if (cnt == L)
	{
		if (ja >= 2 && mo >= 1)
		{
			for (int i = 0; i < L; i++)
			{
				cout << (char)(tt[i] + 'a');
			}
			cout << endl;
		}
		return;
	}

	for (int i = index; i < 26; i++)
	{
		if (strData[i][0] == 1 && strData[i][1]==0)
		{
			if (i == 0 || i == 4 || i == 8 || i == 14 || i == 20)
			{
				tt[cnt] = i;
				strData[i][1] = 1;
				func(tt, cnt + 1, ja, mo + 1, i + 1);
				strData[i][1] = 0;
				tt[cnt] = 0;
			}
			else
			{
				tt[cnt] = i;
				strData[i][1] = 1;
				func(tt, cnt + 1, ja + 1, mo, i + 1);
				strData[i][1] = 0;
				tt[cnt] = 0;
			}
		}
	}
}


int main()
{
	cin >> L >> C;
	for (int i = 0; i < C; i++)
	{
		char tmp;
		cin >> tmp;
		strData[tmp - 'a'][0]++;
	}
	func(test, 0, 0, 0, 0);

	return 0;
}