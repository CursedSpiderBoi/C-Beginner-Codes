#include <iostream>
using namespace std;
main ()
{
int n;
cout << "Enter year : ";
cin>> n;
if (n>0)
{
if (n%4==0)
{
	if (n%100 !=0)
{
	cout << " "<<n<<" is a century leap year"<<endl;
	cout << " January: 31 days\n February : 29 days\n March : 31 days\n April : 30 days\n May : 31 days\n June : 30 days\n July : 31 days\n August : 31 days\n September : 30 days\n October : 31 days\n November : 30 days\n December : 31 days "<<endl;
}
else 
{
	cout << " "<<n<<" is a leap year"<<endl;
	cout << " January: 31 days\n February : 29 days\n March : 31 days\n April : 30 days\n May : 31 days\n June : 30 days\n July : 31 days\n August : 31 days\n September : 30 days\n October : 31 days\n November : 30 days\n December : 31 days "<<endl;
}
}
else
{
	cout << " "<<n<<" is a not leap year"<<endl;
	cout << " January: 31 days\n February : 28 days\n March : 31 days\n April : 30 days\n May : 31 days\n June : 30 days\n July : 31 days\n August : 31 days\n September : 30 days\n October : 31 days\n November : 30 days\n December : 31 days "<<endl;
}
}
else 
cout << "Please enter valid input";
return 0;
}


