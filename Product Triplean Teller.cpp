#include <iostream>
using namespace std;
int main()
{
	int dig1 = 0, dig2 = 0, dig3 = 0, req_num = 0;
	int dum1, dum2, dum3;
	cout << "Enter required number : ";
	cin >> req_num;
	for (int n = 1; n << req_num; n++)
	{
		dig1 = n - 1;
		dig2 = n;
		dig3 = n + 1;
		if ((dig1 * dig2 * dig3 == req_num))
		{
			cout << "Required numbers is " << dig1 << " , " << dig2 << " , " << dig3;
			dum1 = dig1;
			dum2 = dig2;
			dum3 = dig3;
		}
	}
	if ((dum1 * dum2 * dum3 == req_num))
	{
		return 0;
	}
	else
	{
		cout << "No triplean product found";
		return 0;
	}
}

