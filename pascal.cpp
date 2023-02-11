#include<iostream>

using namespace std;
void pascal(int arr[],int n)
{
	arr[n]=arr[0];
	int count=1;
	for (int i=0;i<n-1;i++)
	{
		arr[count]=arr[i]+arr[i+1];
		count++;
	}
	for (int i=0;i<n;i++)
	{
		cout<<arr[i]<<"\t";
	}
}
int main()
{
	int arr[1],n=1,vi=1;
	cout<<"Enter the number of Pascal array you need : ";
	cin>>vi;
	arr[vi];
	for (int i=n;i<vi;i++)
	{
	pascal(arr,i);	
	}

system("pause");
return 0;
}

