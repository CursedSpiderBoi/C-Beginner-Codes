#include <iostream>
using namespace std;
main()
{
	int a, b;
	char x;
	cout << "Enter first number : ";
	cin >> a;
	cout << "Enter second number : ";
	cin >> b;
	cout << "Enter desire operation (+,-,/,*,%) : ";
	cin >> x;
	if (x == '+')
	{
		cout << "" << a << "+" << b << " = " << (a + b) << "" << endl;
	}
	else if (x == '-')
	{
		cout << "" << a << "-" << b << " = " << (a - b) << "" << endl;
	}
	else if (x == '/')
	{
		cout << "" << a << "/" << b << " = " << (a / b) << "" << endl;
	}
	else if (x == '*')
	{
		cout << "" << a << "*" << b << " = " << (a * b) << "" << endl;
	}
	else if (x == '%')
	{
		cout << "" << a << "%" << b << " = " << a % b << "" << endl;
	}
	else
	{
		cout << "Please choose valid operator";
	}
    label:
    return 0;
}
