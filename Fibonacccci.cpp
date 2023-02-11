/*#include <iostream>
using namespace std;
int main()
{
UwU:
	{
		int num1 = 0, num2 = 1, num_n = 0, k = 2;
		cout << "Enter desired series num : ";
		cin >> k;
		for (int c = 3; c <= k; c++)
		{
			num_n = num1 + num2;
			num1 = num2;
			num2 = num_n;

		}
		cout << "The disired fibonacci number is " << num_n << endl;
	}
	int ans = 0;
	cout << "Do you want to try again(0/1):";
	cin >> ans;
	if (ans == 1)
	{
		goto UwU;
	}
	else
	{
		return 0;
	}
}
/*
/*
#include <iostream>
using namespace std;
int main()
{
	int num1 = 0, num2 = 1, req_num = 0;
	cout << "Enter num upto which you want fibonacci series : ";
	cin >> req_num;
	cout << " The sequence upto " << req_num << " is ";
	for (int num_n = 0; num_n < req_num; num_n = num1 + num2)
	{
		cout << " " << num_n << " ";
		num1 = num2;
		num2 = num_n;
	}
	return 0;
}
/*
/*
#include <iostream>
using namespace std;
int main()
{
	int num1 = 0, num2 = 1, up_lim = 0, low_lim = 0;
	cout << "Enter upper num limit : ";
	cin >> up_lim;
	cout << "Enter lower num limit : ";
	cin >> low_lim;
	for (int num_n = 0; num_n < up_lim; num_n = num1 + num2)
	{
		if ((num_n > low_lim) && (num_n < up_lim))
		{
			cout << " " << num_n << " ";
		}
		num1 = num2;
		num2 = num_n;
	}
	return 0;
}
/*
/*
#include <iostream>
using namespace std;
int main()
{
	int num1 = 0, num2 = 1, sum = 0;
	for (int num_n = 0; num_n < 4000000; num_n = num1 + num2)
	{
		if ((num_n % 2 == 0))
		{
			sum = sum + num_n;
		}
		num1 = num2;
		num2 = num_n;
	}
	cout << "The sum of even fibonacci num less than Four million is " << sum << endl;
	return 0;
}
/*
