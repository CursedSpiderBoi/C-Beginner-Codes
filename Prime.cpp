#include <iostream>
using namespace std;
int main ()
{
int num=0,div_f=0;
cout<<"Enter number : ";
cin>>num;
for(int i=2;i<=num/2;i++)
{
	if (num%i==0)
	{
		div_f++;
	}
}
if (div_f==0)
{
	cout<<"Entered number is a prime number "<<endl;
}
else 
{
	cout<<"Entered number is not a prime number "<<endl;
}
system("pause");
return 0;
}

