#include <iostream>
#include <string>

using namespace std;
int adder = 0;
string plusStr(string str1, string str2)
{
	string tmp;
	
	int str1len=str1.length();
	int str2len=str2.length();
	tmp.resize(str1len);
	for (int i = str1len-1; i >= 0; i--)
	{

		if (i - (str1len - str2len) >=0)
		{
			if (str1[i] + str2[i - (str1len - str2len)] + adder - '0' - '0' > 9)
			{
				tmp[i] = str1[i] + str2[i - (str1len - str2len)] + adder - '0' - 10;
				adder = 1;
			}
			else
			{
				tmp[i] = str1[i] + str2[i - (str1len - str2len)] + adder - '0';
				adder = 0;
			}
		}
		else
		{
			if (str1[i] + adder - '0' > 9)
			{
				tmp[i] = str1[i] + adder - 10;
				adder = 1;
			}
			else
			{
				tmp[i] = str1[i] + adder;
				adder = 0;
			}
		}
	}
 	return tmp;
}

int main()
{
	string a, b,ans;
	cin >> a >> b;
	ans= a.length() >= b.length() ? plusStr(a, b) : plusStr(b, a);
	if (adder == 1) cout << "1";
	cout << ans;
	return 0;
}
