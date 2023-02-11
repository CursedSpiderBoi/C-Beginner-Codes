#include <iostream>
using namespace std;
void input(char arr[],int size)
{
	cout<<"Enter string value : ";
cin.getline(arr,size);
}
int count(char arr[],int size)
{
	int i=0;
	int fq=0;
while(arr[i]!='\0')
{
	fq++;
	i++;
}
return fq;	
}
int main ()
{
int size=100,fq=0;
char arr[size];
input(arr,size);
fq=count(arr,size);
cout<<"The number of characters entered is : ";
cout<<fq<<endl;
system("pause");
return 0;
}
