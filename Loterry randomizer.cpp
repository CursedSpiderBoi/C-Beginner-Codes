#include <iostream>
#include<ctime>
#include<cstdlib>
using namespace std;
void Lottery(int ar[],int arrr[])
{
	int u=0;
	for (int i=0;i<5;i++)
{
	if ((ar[i])==(arrr[i]))
	{
		u++;
	}
}
if (u==5)
{
	cout<<"GRAND PRIZE";
}
else 
{
	cout<<"Better luck next time";
}
}
int main ()
{
srand(time(0));
int arr[5],ara[5];
for (int i=0;i<5;i++)
{
	cout<<"Enter your lottery "<<i+1<<" number : ";
	cin>>arr[i];
}
for (int i=0;i<5;i++)
{
	ara[i]=((rand()%10)+1);
}
Lottery(arr,ara);
return 0;
}

