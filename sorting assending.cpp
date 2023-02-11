#include <iostream>
using namespace std;
int main ()
{
	int size;
cout <<"Enter Array size : ";
cin>>size;
int arr[size];
for (int count=0;count<size;count++)
{
	cout<<"Enter "<<count+1<<" Array value : ";
	cin>>arr[count];
}
for (int count=0;count<size-1;count++)
{
	for (int n=0;n<size-1;n++)
	{
		if (arr[n]>arr[n+1])
		{
		int dum=0;
		dum=arr[n];
		arr[n]=arr[n+1];
		arr[n+1]=dum;	
		}
	}
}
for (int count=0;count<size;count++)
{
	cout<<arr[count]<<" ";
}
cout<<endl;
system("pause");
return 0;
}

