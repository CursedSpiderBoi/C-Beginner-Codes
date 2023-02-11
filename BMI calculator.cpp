#include<iostream>
using namespace std;
int main()
{
	float a, b, c ;
	cout << "Please enter weight in kg : "; getchar;
	cin >> a;
	cout << "Please enter height in meters : "; getchar;
	cin >> b;
	if (a>0 && b>0)
	{
		c = (a/(b*b))*10;
			cout << "BMI = " << c << " ";
	}
	else
	{
	cout <<"Please enter non-zero,positive input"<<endl;
	}
	return 0;
}
