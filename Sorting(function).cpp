#include <iostream>
using namespace std;
void input(int &size,int arr[&size])
{
	for (int count=0;count<size;count++)
{
	cout<<"Enter "<<count+1<<" Array value : ";
	cin>>arr[count];
}
}
void sort(int &size,int arr[&size])
{
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
}
void print(int &size,int arr[&size])
{
for (int count=0;count<size;count++)
{
	cout<<arr[count]<<" ";
}	
}

int main ()
{
int size;
cout <<"Enter Array size : ";
cin>>size;
int arr[size];
input(size,arr[size]);
sort(size,arr[size]);
print(size,arr[size]);
cout<<endl;
system("pause");
return 0;
}

