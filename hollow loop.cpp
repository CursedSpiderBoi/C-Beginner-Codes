#include <iostream>
using namespace std;
void Hollow_tri(int size)
{
	for (int i=1;i<=size;i++)
	{
		for (int k=i;k<=size;k++)
		{
			if ((i==1)||k==i || k==size)
			{
				cout<<"*";
			}
			else
			{
				cout <<" ";
			}
		}
		cout<<endl;
	}
}
int main ()
{
int size;
cout <<"Enter size : ";
cin>>size;
Hollow_tri(size);
system("pause");
return 0;
}

