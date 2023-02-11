#include <iostream>
using namespace std;
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
void reverse(char arr[],int fq)
{
	int f=fq-1;
for (int i=0;i<fq/2;i++)
{
	char dum=arr[i];
	arr[i]=arr[f];
	arr[f]=dum;
	f--;
}
}
int main ()
{
const int size=100;
int fq=0;
char arr[size];
cout<<"Enter string value : ";
cin.getline(arr,size);
fq=count(arr,size);
reverse(arr,fq);
for (int i=0;i<fq;i++)
{
	cout<<arr[i];
}
cout<<endl;
system("pause");
return 0;
}
