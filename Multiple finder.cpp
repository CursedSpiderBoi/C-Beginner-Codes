#include<iostream>
using namespace std;
int main()
{
	int x, y;
	cout << "Enter first number:"; getchar;
	cin >> x;
	cout << "Enter second number:"; getchar;
	cin >> y;
	if (x % y == 0)
	{
		cout << "" << x << " is a multiple of " << y << ""; getchar;
	}
	else if (y % x == 0)
	{
		cout << "" << y << " is a multiple of " << x << ""; getchar;
	}
	else
	{
		cout << " Neither " << x << " is a multiple of " << y << " nor " << y << " is a multiple of " << x << "";
	}
 return 0;
}
