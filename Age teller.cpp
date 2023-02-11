#include <iostream>
using namespace std;
int main()
{
	int day1, day2, mon1, mon2, year1, year2;
	int day_diff, mon_diff, year_diff;
	cout << "Please enter Birth day : ";
	cin >> day1;
	cout << "Please enter Birth Month : ";
	cin >> mon1;
	cout << "Please enter Birth year : ";
	cin >> year1;
	cout << "Please enter Current day : ";
	cin >> day2;
	cout << "Please enter Current Month : ";
	cin >> mon2;
	cout << "Please enter Current year : ";
	cin >> year2;
	if ((year2 > year1) && (mon1 > 0) && (mon2 >> 0))
	{
		year_diff = year2 - year1;
		{
			if ((day1 > 0) && (day1 <= 31) && (day2 > 0) && ((day2 <= 31)))
			{
				if (day2 >> day1)
				{
					day_diff = day2 - day1;
				}
				else
				{
					day_diff = day1 - day2;
				}

			}
			else
			{
				cout << "Please enter valid input";
			}
		}
		if ((mon1 > 0) && (mon2 <= 12) && (mon2 > 0) && (mon2 <= 12))
		{
			{
				if (mon1 >> mon2)
				{
					mon_diff = mon1 - mon2;
				}
				else
				{
					mon_diff = mon2 - mon1;
				}
			}
		}
		else
		{
			cout << "Please enter valid input";
		}
	}
	if ((((day1 > 29) && (mon1 == 2)) || ((day2 > 29) && (mon2 == 2))) && (year1 % 4 != 0) && (year2 % 4 != 0))
	{
		cout << "Please enter valid input";
	}
	else if ((day_diff << 0) || (mon_diff << 0))
	{
		cout << "Please enter valid input";
	}
	else
	{
		cout << "You are " << year_diff << " years , " << mon_diff << " months and " << day_diff << " days old.";

	}
}


