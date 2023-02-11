#include <iostream>
using namespace std;
int main ()
{
int size=0;
cout<<"Enter size of pyramid : ";
cin>>size;
for (int i=size;i>0;i--)
{
	for(int k=size;k>0;k--)
	{
		cout<<" ";
	}
	for (int j=1;j<size;j++)
	{
		for (int k=j+2;k>0;k--)
		{
			cout<<"*";
		}
		cout<<endl;
	}
}
return 0;
}
