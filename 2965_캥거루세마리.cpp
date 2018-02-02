#include <iostream>
using namespace std;
int a, b, c;
int main()
{
	cin >> a >> b >> c;
	if (b - a < c - b)
		cout << c - (b+1) << "\n";
	else
		cout << b - (a+1) << "\n";
	return 0;
}
